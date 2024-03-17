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
    int arr[n];
    for(int i=0;i<n;i++){ cin>>arr[i];}
    
    int bcnt=1, ecnt=1;
    for(int i=1;i<n;i++){if(arr[0]==arr[i]) bcnt++; else break;}
    for(int i=n-2;i>=0;i--){if(arr[n-1]==arr[i]) ecnt++; else break;}
    int maxi;
    if(arr[0]==arr[n-1]){
        maxi = min(bcnt+ecnt,n);
    }
    else{
        maxi=max(bcnt,ecnt);
    }
    cout<<n-maxi<<endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    int t=1;
    cin>>t;
    while(t-->0) solve();
    return 0;
}