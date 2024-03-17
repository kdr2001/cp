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
    int n,k;
    cin>>n>>k;
    
    bool cycle=false;
    set<int> adj[n+1];
    vector<int> vis(n+1), dfsVis(n+1);
    
    
    for(int i=0;i<k;i++){
        vector<int> a(n);
        for(auto &j:a) cin>>j;
        
        for(int i=2;i<n;i++) adj[a[i-1]].insert(a[i]);
    }
    //if there is a cycle , then there can't be order
    
    function<void(int)> dfs=[&](int node){
        vis[node]=1;
        dfsVis[node]=1;
        
        for(auto &i: adj[node]){
            if(dfsVis[i]) cycle=true;
            else if(!vis[i]) dfs(i);
        }
        dfsVis[node]=0;
    };
    
    for(int i=1;i<=n;i++){
        if(!vis[i]) dfs(i);
    }
    
    cout<<(cycle?"NO":"YES")<<endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    int t=1;
    cin>>t;
    while(t-->0) solve();
    return 0;
}