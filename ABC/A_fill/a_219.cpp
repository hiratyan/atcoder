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
    int n;
    cin >> n;
    if(n < 40){
        cout << 40 - n << endl;
        return 0;
    } else if(n < 70){
        cout << 70 - n << endl;
        return 0;
    } else if(n < 90){
        cout << 90 - n << endl;
        return 0;
    }
    cout << "expert" << endl;

    return 0;
}