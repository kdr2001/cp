#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    long long a, k1, k2, ktot, red;
    cin>>a;
    for(long long n=1;n<=a;n++)
    {
        k1 = n*n;
        k2 = k1-1;
        ktot = k1*k2/2;
        red = 4 * (n-1) * (n-2);
        cout<<ktot-red<<endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    int t=1;
    //cin>>t;
    while(t-->0) solve();
    return 0;
}
