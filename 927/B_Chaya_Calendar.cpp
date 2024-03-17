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
    
    int initial;
    cin>>initial;
    
    for(int i=1;i<n;i++){
        int a;
        cin>>a;
        if(a>initial) initial=a;
        else initial=((initial/a)+1)*a;
    }
    cout<<initial<<endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    int t=1;
    cin>>t;
    while(t-->0) solve();
    return 0;
}