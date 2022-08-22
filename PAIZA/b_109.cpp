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
    int n, h, w, true_p, true_q, keep_first, keep_second, true_man = 1000000, man;
    cin >> n >> h >> w >> true_p >> true_q;
    vector<vector<int>> vec(h, vector<int>(w, 0));
    for(int i = 0; i < n; i++){
        cin >> keep_first >> keep_second;
        vec.at(keep_first).at(keep_second) = 1;
    }
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(vec.at(i).at(j) == 0){
                man = abs(true_p - i) + abs(true_q - j);
                true_man = min(man, true_man);
            }
        }\
    }

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(vec.at(i).at(j) == 0 && true_man == abs(true_p - i) + abs(true_q - j)){
                cout << i << ' ' << j << endl;
            }
        }
    }

    return 0;
}