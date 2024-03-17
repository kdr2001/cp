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
    
    int x,y;
    cin>>x>>y;
    
    int arr[n];
    for(int i=0;i<n;i++){ cin>>arr[i];}
    
    map<pair<int,int>,int> map;
    ll ans=0L;
    for(int i=0;i<n;i++){
        int X = (x-arr[i]%x)%x;
        int Y = arr[i]%y;
        ans+=map[{X,Y}];
        map[{arr[i]%x,arr[i]%y}]++;
    }
    cout<<ans<<endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    int t=1;
    cin>>t;
    while(t-->0) solve();
    return 0;
}