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
    int N, D; cin >> N >> D;
    vector<vector<int>> X(N, vector<int>(D, 0));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < D; j++){
            cin >> X.at(i).at(j);
        }
    }
    int ans = 0;
    for(int i = 0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            int norm = 0;
            for(int k = 0; k < D; k++){
                int diff = abs(X.at(i).at(k) - X.at(j).at(k));
                norm += diff * diff;
            }
            bool flag = false;
            for(int k = 0; k <= norm; k++){
                if(k * k == norm){
                    flag = true;
                }
            }
            if(flag){
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}