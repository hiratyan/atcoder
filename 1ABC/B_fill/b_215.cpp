#include <bits/stdc++.h>
using namespace std;
//#include <atcoder/all>
//using namespace atcoder;
#define rep(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
#define rep0(i, n) for (int i = 1; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
//using mint = modint1000000007;

int main() {
    ll n, ans, two = 1;
    cin >> n;
    for(int k = 0; k <= 100; k++){
        if(two <= n){
            ans = k;
        } else {
            break;
        }
        two *= 2;
    }

    cout << ans << endl;

    return 0;
}