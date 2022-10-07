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
    int n, x, ans = 0;
    cin >> n >> x;
    vector<int> fri(n);
    vector<int> bucket(n + 1);
    rep(i, 0, n) cin >> fri.at(i);

    for(int i = 0; i < n; i++){
        bucket.at(x) = 1;
        x = fri.at(x - 1);        
    }

    for(int i = 0; i <= n; i++){
        if(bucket.at(i) == 1){
            ans++;
        }
    }

    cout << ans << endl;

    

    return 0;
}