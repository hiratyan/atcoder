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

int main() {
    int n;
    vector<int> t(110000), x(110000), y(110000);
    cin >> n;
    t.at(0) = x.at(0) = y.at(0) = 0;
    rep(i, 0, n) cin >> t.at(i + 1) >> x.at(i + 1) >> y.at(i + 1);

    bool can = true;
    for(int i = 0; i < n; i++){
        int dt = t.at(i + 1) - t.at(i);
        int dist = abs(x.at(i + 1) - x.at(i)) + abs(y.at(i + 1) - y.at(i));
        if(dt < dist) can = false;
        if(dist % 2 != dt % 2) can = false;
    }

    if (can) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}