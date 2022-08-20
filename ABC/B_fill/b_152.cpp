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
    int a, b;
    cin >> a >> b;
    vector<int> a_string(b);
    vector<int> b_string(a);
    rep(i, 0, b) a_string.at(i) = a;
    rep(i, 0, a) b_string.at(i) = b;
    if(a < b){
        rep(i, 0, b) cout << a_string.at(i);
        return 0;
    }else {
        rep(i, 0, a) cout << b_string.at(i);
        return 0;
    }

    return 0;
}