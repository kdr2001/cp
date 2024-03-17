#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define all(x) x.begin(),x.end()
#define pb push_back

const ll inf = (long long)1e9 + 20;
const int mod = (int)1e9 + 7;

void solve() {
    int n;
    cin >> n;
    
    char trump;
    cin>>trump;
    
    vector<string> cards, trumpCards;
    for(int i=0;i<2*n;i++){
        string card;
        cin>>card;
        
        if(card[1]==trump) trumpCards.pb(card);
        else cards.pb(card);
    }
    
    vector<pair<string,string>> moves;
    for(int i=0;i<cards.size();i++){
        for(int j=0;j<cards.size();j++){
            if(i==j) continue;
            if(cards[i]=="") continue;
            if(cards[j]=="") continue;
            if(cards[i][1]==cards[j][1]){
                moves.pb({min(cards[i],cards[j]), max(cards[i],cards[j])});
                cards[i]="";
                cards[j]="";
            }
        }
    }
    
    bool ok=true;
    for(int i=0;i<cards.size();i++){
        if(cards[i]!=""){
            if(trumpCards.empty()) ok=false;
            else {
                moves.pb({cards[i],trumpCards.back()});
                trumpCards.pop_back();
            }
        }
    }
    
    if(trumpCards.size()%2==1) ok=false;
    
    if(!ok){
        cout<<"IMPOSSIBLE\n";
        return;
    }
    
    sort(trumpCards.begin(), trumpCards.end());
    
    for(int i=0;i<trumpCards.size();i++){
        moves.pb({trumpCards[i],trumpCards.back()});
        trumpCards.pop_back();
    }
    
    for(auto ele: moves){
        cout<<ele.first<<" "<<ele.second<<"\n";
    }
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    int t=1;
    cin>>t;
    while(t-->0) solve();
    return 0;
}