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
const ll INF = 1LL << 60; //無限大
const ll MOD = 1000000007; //10^9 + 7


/*
//引数の桁数を返す．
int num_digits(int x){
    int c = 0;
    while(x > 0){
        x /= 10;
        c++;
    }
    return c;
}

int main() {
    int N, M;
    vector<int> S(5), C(5);
    cin >> N >> M;
    rep(i, 0, M) cin >> S[i] >> C[i], S[i]--;

    rep(ans, 0, 1000) {
        string s = to_string(ans);
        int num = num_digits(ans);
        if (num != N) continue;

        bool ok = true;
        rep(i, 0, M) {
            rep(j, 0, N){
                 if (j == S[i] && (s[j] - '0') != C[i]) ok = false;
            }
        }
        if (ok) {
            cout << ans << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
*/

int num(int x){
    int cnt = 0;
    if(x == 0){
        cnt = 1;
    }
    while(x > 0){
        cnt++;
        x = x / 10;
    }
    return cnt;
}

/*
int main(){
    int n, m, keep, ans = 100000;
    bool flag = true;
    cin >> n >> m;
    vector<vector<int>> vec(m, vector<int>(2, 0));
    rep(i, 0, m) cin >> vec.at(i).at(0) >> vec.at(i).at(1);

    for(int i = 0; i <= 9; i++){
        for(int j = 0; j <= 9; j++){
            for(int k = 0; k <= 9; k++){
                keep = 100 * i + 10 * j + k;
                for(int l = 0; l < m; l++){
                    if(vec.at(l).at(0) == 1){
                        if(!(i == vec.at(l).at(1))){
                            flag = false;
                        }
                    }
                    if(vec.at(l).at(0) == 2){
                        if(!(j == vec.at(l).at(1))){
                            flag = false;
                        }
                    }
                    if(vec.at(l).at(0) == 3){
                        if(!(k == vec.at(l).at(1))){
                            flag = false;
                        }
                    }

                }
                if(flag == true){
                    if(ans > keep){
                        ans = keep;
                    }
                }
                flag = true;
                keep = 0;
            }
        }
    }

    if(!(num(ans) == n)){
        ans = -1;
    }

    cout << ans << endl;
    return 0;
}
*/

int main(){
    int n, m;
    vector<int> dig(m), num(m);
    cin >> n >> m;
    rep(i, 0, m) cin >> dig.at(i) >> num.at(i), dig.at(i)--;

    for(int ans = 0; ans < 1000; ans++){
        string s = to_string(ans);
        if((int)s.length() != n){
            continue;
        }
        bool ok = true;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(j == dig.at(i) && (s.at(j) - '0') != num.at(i)){
                    ok = false;
                }
            }
        }
        if(ok){
            cout << ans << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}