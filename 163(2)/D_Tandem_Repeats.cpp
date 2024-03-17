#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;

#define pb push_back
#define F first
#define S second
#define _sz(x) ((int)x.size())

const ll inf = (long long)1e9 + 20;
const int mod = (int)1e9 + 7;

const int N = 5000 + 20;
int n;
int dp[N][N];
string s;

inline bool possible(char a , char b){
    if(a=='?' || b=='?') return true;
    return (a==b);
}


void solve()
{
    cin>>s;
    n = _sz(s);
    
    int ans=0;
    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>i;j--){
            if(possible(s[i],s[j])) dp[i][j]=1+dp[i+1][j+1];
            else dp[i][j]=0;
            
            if(dp[i][j]>=(j-i)) ans=max(ans,2*(j-i));
        }
    }
    
    cout<<ans<<"\n";
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) dp[i][j]=0;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    int t=1;
    cin>>t;
    while(t-->0) solve();
    return 0;
}