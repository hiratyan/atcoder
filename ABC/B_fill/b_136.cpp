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
    int n, ans = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        if((1 <= i && i <= 9) ||
           (100 <= i && i <= 999) ||
           (10000 <= i && i <= 99999)){
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}