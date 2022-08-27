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
    int n, cnt = 0, ans = 0;
    cin >> n;
    for(int i = 1; i <= n; i += 2){
        cnt = 0;
        for(int j = 1; j <= n; j++){
            if(i % j == 0){
                cnt++;
                //cout << i << ':' << j << ':' << cnt << endl;
            }
        }
        if(cnt == 8){
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}