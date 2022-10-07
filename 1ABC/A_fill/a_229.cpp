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
    string s1, s2;
    cin >> s1 >> s2;
    if((s1 == "#." && s2 == ".#") || (s1 == ".#" && s2 == "#.")){
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;

    return 0;
}