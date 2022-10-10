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
/*
int main() {
    int n, k, m, keep, cnt = 0, ans;
    cin >> n >> k >> m;
    for(int i = 0; i < n - 1; i++){
        cin >> keep;
        cnt += keep;
    }
    ans = m * n - cnt;
    if(ans > k){
        cout << -1 << endl;
        return 0;
    } else if(ans < 0){
        cout << 0 << endl; 
        return 0;
    } else {
        cout << ans << endl;
        return 0;
    }
}
*/

int main(){
    float n, k, m, keep, sum = 0, ans = -1;
    cin >> n >> k >> m;
    for(int i = 0; i < n - 1; i++){
        cin >> keep;
        sum += keep;
    }
    for(int i = 0; i <= k; i++){
        keep = (sum + i) / n;
        if(keep >= m){
            ans = i;
            break;
        }
    }
    cout << ans << endl;

    return 0;
}