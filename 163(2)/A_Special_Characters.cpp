#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define all(x) x.begin(),x.end()
#define pb push_back

const ll inf = (long long)1e9 + 20;
const int mod = (int)1e9 + 7;

void solve()
{
    int n;
    cin>>n;
    
    if(n%2==0){
        cout<<"YES\n";
        for(int i=0;i<n;i+=2){
            if(i%4==0) cout<<"AA";
            else cout<<"BB";
        }
    }
    else{
        cout<<"NO";
    }
    cout<<"\n";
    
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    int t=1;
    cin>>t;
    while(t-->0) solve();
    return 0;
}