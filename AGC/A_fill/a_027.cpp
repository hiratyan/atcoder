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
    int n, x, ans = 0;
    cin >> n >> x;
    vector<int> vec(n);
    rep(i, 0, n) cin >> vec.at(i);
    sort(vec.begin(), vec.end());
    int i = 0;
    while(x > 0){
        x = x - vec.at(i);
        cout << x << endl;
        i++;
        ans++;
        if(i == n || x <= 0){
            break;
        }
    }

    cout << ans << endl;

    return 0;
}