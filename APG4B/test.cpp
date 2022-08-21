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
    int i, j;
    cin >> i >> j;
    int k = i  + j;
    for(int l = 0; l < 100; l++){
        cout << k << endl;
        k = min(k, i);
    }
    

    return 0;
}