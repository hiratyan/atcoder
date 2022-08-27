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
    int a, b, c, x, y, ans = 0;
    cin >> a >> b >> c >> x;

    for(int i = 0; i <= a; i++){
        for(int j = 0; j <= b; j++){
            for(int k = 0; k <= c; k++){
                y = 500 * i + 100 * j + 50 * k;
                if(x == y){
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}