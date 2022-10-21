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
    int v;
    cin >> v;
    vector<int> vec(3);
    rep(i, 0, 3) cin >> vec.at(i);
    while(1){
        v -= vec.at(0);
        if(v < 0){
            cout << 'F' << endl;
            return 0;
        }
        v -= vec.at(1);
        if(v < 0){
            cout << 'M' << endl;
            return 0;
        }
        v -= vec.at(2);
        if(v < 0){
            cout << 'T' << endl;
            return 0;
        }
    }
    return 0;
}