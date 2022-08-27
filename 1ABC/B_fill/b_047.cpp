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
    int w, h, n, x, y, a, ans = 0;
    cin >> w >> h >> n;
    vector<vector<int>> vec(h, vector<int>(w, 0));
    for(int i = 0; i < n; i++){
        cin >> x >> y >> a;
        if(a == 1){
            for(int i = 1; i <= h; i++){
                for(int j = 1; j <= x; j++){
                    vec.at(i - 1).at(j - 1) = 1;
                }
            }
        } else if(a == 2){
            for(int i = 1; i <= h; i++){
                for(int j = x; j < w; j++){
                    vec.at(i - 1).at(j) = 1;
                }
            }
        } else if(a == 3){
            for(int i = h - y + 1; i <= h; i++){
                for(int j = 1; j <= w; j++){
                    vec.at(i - 1).at(j - 1) = 1;
                }
            }
        } else {
            for(int i = 1; i < h - y + 1; i++){
                for(int j = 1; j <= w; j++){
                    vec.at(i - 1).at(j - 1) = 1;
                }
            }
        }
    }
    /*
    rep(i, 0, h){
        rep(j, 0, w){
            cout << vec.at(i).at(j);
            if(j == w - 1){
                cout << endl;
            }
        }
    }
    */
    rep(i, 0, h){
        rep(j, 0, w){
            if(vec.at(i).at(j) == 0){
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}