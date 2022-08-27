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
    int n, k, ans = 0;
    cin >> n >> k;
    vector<int> vec(n, 0);
    rep(i, 0, n) cin >> vec.at(i);
    map<int, int> map;
    rep(i, 0, n){
        map[vec.at(i)]++;
    }
    vector<int> v;
    for(auto p : map) v.push_back(p.second);
    sort(v.begin(), v.end());

    int a = v.size();

    if(a <= k){
        cout << 0 << endl;
    } else {
        rep(i, 0, a - k){
            ans += v[i];
        }
        cout << ans << endl;
    }

    return 0;
}