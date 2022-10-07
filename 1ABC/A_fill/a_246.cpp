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

int main() {
    vector<int> x(3);
    vector<int> y(3);
    rep(i, 0, 3) cin >> x.at(i) >> y.at(i);
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    int ans_x, ans_y;
    ans_x = x.at(0);
    ans_y = y.at(0);
    if(x.at(0) == x.at(1)){
        ans_x = x.at(2);
    }
    if(y.at(0) == y.at(1)){
        ans_y = y.at(2);
    }

    cout << ans_x << ' ' << ans_y << endl;

    return 0;
}