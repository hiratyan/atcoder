#include <bits/stdc++.h>
#include <iomanip>
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

//x
int main() {
    long double n, ans = -1, keep;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    rep(i, 0, n) cin >> x.at(i) >> y.at(i);

    for(int i = 0; i < n; i++){
        for(int j = 1; i + j < n; j++){
            keep = sqrt((x.at(j) - x.at(i)) * (x.at(j) - x.at(i)) + (y.at(j) - y.at(i)) * (y.at(j) - y.at(i)));
            if(ans < keep){
                ans = keep;
            }
        }
    }
    cout << fixed << setprecision(10) << ans << endl;

    return 0;
}

//o
/*
int main() {
    long double n, ans = -1, keep;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    rep(i, 0, n) cin >> x.at(i) >> y.at(i);

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            keep = sqrt((x.at(j) - x.at(i)) * (x.at(j) - x.at(i)) + (y.at(j) - y.at(i)) * (y.at(j) - y.at(i)));
            if(ans < keep){
                ans = keep;
            }
        }
    }
    cout << fixed << setprecision(10) << ans << endl;

    return 0;
}
*/

//for(int j = 1; i + j < n; j++) x
//for(int j = i + 1; j < n; j++) o