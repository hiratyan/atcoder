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
    int n, k, ans = 0;
    cin >> n >> k;
    vector<int> vec(n);

    rep(i, 0, n) cin >> vec.at(i);
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());

    rep(i, 0, k) ans += vec.at(i);
    
    cout << ans << endl;
    return 0;
}