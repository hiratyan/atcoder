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
    int h, w;
    cin >> h >> w;
    vector<vector<int>> vec(h, vector<int>(w, 0));
    rep(i, 0, h){
        rep(j, 0, w){
            cin >> vec.at(i).at(j);
        }
    }

    rep(j, 0, w){
        rep(i, 0, h){
            cout << vec.at(i).at(j) << ' ';
            if(i == h - 1){
                cout << endl;
            }
        }
    }

    return 0;
}