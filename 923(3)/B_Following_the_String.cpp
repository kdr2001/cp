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

    int freq[26]={0};
    char ans[n+1];
    ans[n]='\0';
    for(int i=0;i<n;i++){
        char ch=' ';
        for(int k=0;k<26;k++){
            if(arr[i]==freq[k]){freq[k]++; ch='a'+k; break;}
        }
        if(ch!=' ') ans[i]=ch;
    }
    cout<<ans<<"\n";
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    int t=1;
    cin>>t;
    while(t-->0) solve();
    return 0;
}