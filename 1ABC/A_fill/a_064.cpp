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
    int r, g, b;
    cin >> r >> g >> b;

    if(((g * 10) + b) % 4 == 0){
        cout << "YES" << endl;
        return 0;
    }

    cout << "NO" << endl;

    return 0;
}