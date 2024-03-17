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
    int n,m;
    cin>>n>>m;
    
    vector<int> arr(n), zeroes;
    for(int i=0;i<n;i++){ cin>>arr[i];}
    
    
    for(int i=0;i<n;i++){
        int tenZeroes=0, digits=0;
        
        while(arr[i]%10==0) {tenZeroes++; arr[i]/=10;}
        while(arr[i]>0){digits++; arr[i]/=10;}
        
        m-=digits;
        zeroes.pb(tenZeroes);
    }
    sort(zeroes.begin(), zeroes.end(), greater<int>());
    for(int i=1;i<zeroes.size();i+=2) m-=zeroes[i];
    cout<<((m<0)?"Sasha":"Anna")<<endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    int t=1;
    cin>>t;
    while(t-->0) solve();
    return 0;
}