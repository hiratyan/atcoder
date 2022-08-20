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
    int a, b, k, ans = 0,cnt = 0;
    cin >> a >> b >> k;
    for(int i = min(a, b); i >= 1; i--){
        if(a % i == 0 && b % i == 0){
            cnt++;
            //cout << i << endl;
            if(cnt == k){
                ans = i;
                break;
            }
        }
    }

    cout << ans << endl;

    return 0;
}