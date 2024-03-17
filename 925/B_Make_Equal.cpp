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
    
    int sum=0;
    
    int arr[n];
    for(int i=0;i<n;i++){ cin>>arr[i]; sum+=arr[i];}
    int mul = sum/n;

    int i=0,cnt=0;
    for(i=0;i<n;i++){
        if(cnt+arr[i]>=mul){cnt=cnt+arr[i]-mul;}
        else{break;}
    }
    if(i==n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    int t=1;
    cin>>t;
    while(t-->0) solve();
    return 0;
}