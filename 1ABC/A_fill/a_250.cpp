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
    int h, w, r, c;
    cin >> h >> w >> r >> c;
    int ans = 4;

    if(r == 1 || r == h || c == 1 || c == w){
        ans = 3;
        if((r == 1 && c == 1)||
           (r == 1 && c == w)||
           (r == h && c == 1)||
           (r == h && c == w)){
            ans = 2;
        }
    }

    cout << ans << endl;

    return 0;
}