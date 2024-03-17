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
    char s[3];
    int j=2;
    while(j>=0){
        if(n-j>=26){
            s[j]=(char)('a'+25);
            n-=26;
        }
        else{
            s[j]=(char)('a'+(n-j-1));
            n=j;
        }
        // cout<<n<<endl;
        // cout<<s[j]<<endl;
        j--;
    }
    cout<<s<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    int t=1;
    cin>>t;
    while(t-->0) solve();
    return 0;
}