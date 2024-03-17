#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin>>n;
    if(n==2||n==3) {cout<<"NO SOLUTION"; return;}
    if(n%2==1) cout<<n<<" ";
    int i=n/2;
    while(i>=1)
    {
        cout<<2*i-1<<" ";
        i--;
    }
     
    i=n/2;
    while(i>=1)
    {
        cout<<2*i<<" ";
        i--;
    }
   

}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
	int t=1;
	//cin>>t;
	while(t-->0) solve();
	return 0;
}