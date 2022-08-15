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
    double n, t, a, start;
    int ans = 1;
    cin >> n >> t >> a;
    vector<double> vec(n);
    rep(i, 0, n) {
        cin >> vec.at(i);
        vec.at(i) = abs((t - vec.at(i) * 0.006) - a);
    }

    start = vec.at(0);

    rep(i, 0, n){
        if(vec.at(i) < start){
            start = vec.at(i);
            ans = i + 1;
        }
    }

    cout << ans << endl;

    return 0;
}