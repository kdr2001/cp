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
    int n,m,k;
    int arr1[n], arr2[m], ans[k];
    for(int i=0;i<n;i++) cin>>arr1[i];
    for(int i=0;i<m;i++) cin>>arr2[i];
    sort(arr1, arr1+n);
    sort(arr2,arr2+m);
    for(int i=0;i<k/2;i++) ans[i]=arr1[i];
    for(int i=0;i<k/2;i++) ans[i+(k/2)]=arr2[i];
    sort(ans, ans+k);

    bool flag = true;
    if(ans[0]!=1) flag=false;
    // for(int i=0;i<k;i++) cout<<ans[i]<<" ";
    for(int i=1;i<k;i++) {
        if(ans[i]!=ans[i-1]+1){flag=false; break;}
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    int t=1;
    cin>>t;
    while(t-->0) solve();
    return 0;
}