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
    int n, ans = -1;
    string name, ans_name;
    cin >> n;
    map<string, int> elect;
    
    for(int i = 0; i < n; i++){
        cin >> name;
        elect[name]++;
    }

    for(auto p : elect){
        auto keep = p.second;
        if(ans < keep){
            ans = keep;
            ans_name = p.first;
        }
    }
    cout << ans_name << endl;
    return 0;
}