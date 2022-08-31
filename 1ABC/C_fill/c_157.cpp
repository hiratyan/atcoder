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



//引数の桁数を返す．
int num_digits(int x){
    int c = 0;
    while(x > 0){
        x /= 10;
        c++;
    }
    return c;
}

int main() {
    int N, M;
    vector<int> S(5), C(5);
    cin >> N >> M;
    rep(i, 0, M) cin >> S[i] >> C[i], S[i]--;

    rep(ans, 0, 1000) {
        string s = to_string(ans);
        int num = num_digits(ans);
        if (num != N) continue;

        bool ok = true;
        rep(i, 0, M) {
            rep(j, 0, N){
                 if (j == S[i] && (s[j] - '0') != C[i]) ok = false;
            }
        }
        if (ok) {
            cout << ans << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}