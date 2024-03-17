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
    
    deque<int> a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    
    string s; cin>>s;
    
    vector<int> v;
    for(int i=0;i<n;i++){
        if(s[i]=='L'){
            v.push_back(a.front());
            a.pop_front();
        }
        else{
            v.push_back(a.back());
            a.pop_back();
        }
    }
    
    reverse(v.begin(), v.end());
    
    vector<int> ans;
    int mul=1;
    
    for(auto e:v){
        mul=(mul*(e%m))%m;
        ans.push_back(mul);
    }
    
    for(int i=n-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    int t=1;
    cin>>t;
    while(t-->0) solve();
    return 0;
}