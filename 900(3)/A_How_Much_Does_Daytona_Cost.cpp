#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n,k;
    cin>>n>>k;
    bool yes = false;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a==k){ yes=true; }//cout<<yes<<endl;}
    }
    
    if(yes) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    int t=1;
    cin>>t;
    while(t-->0) solve();
    return 0;
}