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
    ll a[n], b[n];
    ll sum1=0L, sum2=0L;
    ll min1 = inf, min2 = inf;
    for(int i=0;i<n;i++) {cin>>a[i]; sum1+=a[i]; min1=min(min1,a[i]); }
    for(int i=0;i<n;i++) {cin>>b[i]; sum2+=b[i]; min2=min(min2,b[i]); }
    cout<<min(sum1+min2*n, sum2+n*min1)<<endl;

}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    int t=1;
    cin>>t;
    while(t-->0) solve();
    return 0;
}