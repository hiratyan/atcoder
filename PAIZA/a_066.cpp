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
    int n, a_i, b_i, ans = -1, cnt = 0;
    cin >> n;
    vector<int> vec(100100);
    for(int i = 0; i < n; i++){
        cin >> a_i >> b_i;
        for(int j = 0; j <= b_i - a_i; j++){
            vec.at(a_i - 1 + j) = 1;
        }
    }
    for(int i = 0; i < vec.size();){
        if(vec.at(i) == 1){
            cnt = 1;
            for(int j = i + 1; j < vec.size(); j++){
                if(vec.at(j) == 1){
                    cnt++;
                } else if(vec.at(j) == 0){
                    i = j;
                    ans = max(ans, cnt);
                    break;
                }
            }
        } else if(vec.at(i) == 0){
            i++;
        }
    }

    cout << ans << endl;

    return 0;
}