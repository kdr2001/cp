#include <bits/stdc++.h>

using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

using ll = long long;

template<typename S, typename T> void smax(S &a, const T &b) {if(a<b) a=b;}
template<typename S, typename T> void smin(S &a, const T &b) {if(a>b) a=b;}

#define rng_init mt19937 rng{chromo::steady_clock::now().time_since_epoch().count()}
#define rng_seed(x) mt19937 rng(x)
#define all(x) (x).begin(), (x).end()
#define sz(x) (int) (x).size()

const int MXN = 1e5+5, INF = 1e9+5;

void solve() {

}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC = 1;
    dbg(TC);
    cin >> TC;
    while (TC--) solve();
}




