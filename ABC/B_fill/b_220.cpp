#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
#define rep0(i, n) for (int i = 1; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;
const ll INF = 1LL << 60; //無限大
const ll MOD = 1000000007; //10^9 + 7

ll hex_conv(ll k, ll x){
    ll ans = 0;
    ll count = 1;
    while(x > 0){
        ans += x % 10 * count;
        x /= 10;
        count *= k;
    }
    return ans;
}

int main() {
    ll k, a, b;
    cin >> k >> a >> b;
    cout << hex_conv(k, a) * hex_conv(k, b) << endl;

    return 0;
}