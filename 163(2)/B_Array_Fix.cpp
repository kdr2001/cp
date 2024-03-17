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
    
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    
    int prev=0;
    for(int i=0;i<n;i++){
        int a = arr[i];
        if(a>9){
            int num1 = a/10;
            int num2=a%10;
            if(prev<=num1 && num1<=num2){
                prev=num2;
            }
            else if(prev<=a){
                prev=a;
            }
            else{
                cout<<"NO\n";
                return;
            }
        }
        else{
           if(prev<=a) prev=a;
           else{
               cout<<"NO\n";
               return;
           }
        }
    }
    cout<<"YES\n";
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    int t=1;
    cin>>t;
    while(t-->0) solve();
    return 0;
}