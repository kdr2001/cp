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

const int N = 2e5+28;
int n;
string s[2];
bool mark[2][N];

pii go_to(int x,int y){
    return s[x][y]=='>'?pii(x,y+1):pii(x,y-1);
}

void dfs(pii p ){
    
    int x=p.F, y=p.S;
    if(mark[x][y]) return;
    mark[x][y]=true;
    
    if(y) dfs(go_to(x,y-1));
    if(y<n-1) dfs(go_to(x,y+1));
    dfs(go_to(!x,y));
    
}
void solve()
{
    cin>>n;
    
    cin>>s[0]>>s[1];
    
    dfs({0,0});
    
    cout<<(mark[1][n-1]?"YES":"NO")<<"\n";
    
    for(int i=0;i<n;i++) mark[0][i]=mark[1][i]=false;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    int t=1;
    cin>>t;
    while(t-->0) solve();
    return 0;
}