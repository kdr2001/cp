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
    ll n, k, x;
    cin>>n>>k>>x;
    ll sumK = k * (k+1) / 2;
    ll sumNminusK = (n-k) * (n-k+1) / 2;
    ll sumN = n * (n+1) / 2;
    if(x>=sumK && x<=(sumN-sumNminusK)) cout<<"YES\n";
    else cout<<"NO\n";
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    int t=1;
    cin>>t;
    while(t-->0) solve();
    return 0;
}