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
    int n, a, b, sum, res = (1 << 20);
    cin >> n;

    for(int i = 1; i < n; i++){
        a = i;
        b = n - a;
        sum = 0;
        while(a > 0){
            sum += a % 10;
            a /= 10;
        }
        while(b > 0){
            sum += b % 10;
            b /= 10;
        }

        res = min(res, sum);
    }

    cout << res << endl;

    return 0;
}