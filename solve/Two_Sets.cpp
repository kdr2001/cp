#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    long long a;
    cin>>a;
    long long sum = (a * (a+1))/2;
    if(sum%2!=0) {cout<<"NO"; return;}
    cout<<"YES"<<endl;
    
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    int t=1;
    //cin>>t;
    while(t-->0) solve();
    return 0;
}
