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

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> ans(n, vector<int>(n, 0));
    for(int i = 0; i < m; i++){
        int turnout_num = 0;
        cin >> turnout_num;
        for(int j = 0; j < turnout_num; j++){
            vector<int> turnout_name(turnout_num);
            rep(a, 0, turnout_num) cin >> turnout_name.at(a);
            for(int k = 0; k < turnout_num; k++){
                for(int l = 0; l < turnout_num; l++){
                    ans.at(turnout_name.at(k) - 1).at(turnout_name.at(l) - 1)++;
                }
            }
            break;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(ans.at(i).at(j) == 0){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}