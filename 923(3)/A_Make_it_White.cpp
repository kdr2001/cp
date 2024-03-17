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
    string a;
    cin>>a;

    int fo=0,lo=0;
    for(int i=0;i<a.length();i++){
        if(a[i]=='B'){fo=i; break;}
    }
    for(int i=a.length()-1;i>=0;i--){
        if(a[i]=='B'){lo=i; break;}
    }
    cout<<lo-fo+1<<"\n";
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    int t=1;
    cin>>t;
    while(t-->0) solve();
    return 0;
}