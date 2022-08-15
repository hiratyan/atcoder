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
    int H, W;
    cin >> H >> W;
    vector<vector<char>> vec(H, vector<char>(W, 0));

    rep(y, 0, H)rep(x, 0, W) cin >> vec.at(y).at(x);

    rep(y, 0, H){
        rep(x, 0, W){
            if(vec.at(y).at(x) == '.'){
                int c = 0;
                rep(dx, -1, 2){
                    rep(dy, -1, 2){
                        if(dx == 0 && dy == 0) continue;
                        int xx = x + dx;
                        int yy = y + dy;
                        if(0 <= xx && xx < W && 0 <= yy && yy < H){
                            if(vec.at(yy).at(xx) == '#'){
                                c++;
                            }
                        }
                    }
                }
                vec.at(y).at(x) = '0' + c;
            }
        }
    }

    
    rep(i, 0, H){
        rep(j, 0, W){
            cout << vec.at(i).at(j);
            if(j == W - 1){
                cout << endl;
            }
        }
    }
    return 0;
}