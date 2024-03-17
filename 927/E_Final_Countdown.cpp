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
    
    string s;
    cin>>s;
    
    int pref[n];
    pref[0]=s[0]-'0';
    for(int i=1;i<n;i++) pref[i]=pref[i-1]+(s[i]-'0');
    
    int curr=n-1;
    vector<int> v;
    
    int carry = 0;
    
    while(true){
        if(carry==0 && curr<0) break;
        
        int sums=carry;
        if(curr>=0) sums+=pref[curr];
        v.push_back(sums%10);
        carry=sums/10;
        curr--;
    }

    while(v.back()==0) v.pop_back();
    reverse(v.begin(), v.end());
    for(auto x:v) cout<<x;
    cout<<"\n";
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    int t=1;
    cin>>t;
    while(t-->0) solve();
    return 0;
}