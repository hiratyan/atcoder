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
    int n, ans1 = 0, ans2 = 0;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    rep(i, 0, n) cin >> x.at(i);
    rep(i, 0, n) cin >> y.at(i);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                if(x.at(i) == y.at(i)){
                    ans1++;
                    continue;
                }
            }
            if(x.at(i) == y.at(j)){
                ans2++;
            }
        }
    }

    cout << ans1 << endl;
    cout << ans2 << endl;

    return 0;
}