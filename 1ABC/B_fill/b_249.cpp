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
    string s, ans;
    bool A = false, a = false;
    cin >> s;
    ans = "No";
    for(int i = 0; i < (int)s.size(); i++){
        if(s.at(i) >= 'a'){
            a = true;
        } else{
            A = true;
        }
    }

    if(A == true && a == true){
        ans = "Yes";
    }

    for(int i = 0; i < (int)s.size(); i++){
        for(int j = i + 1; j < (int)s.size(); j++){
            if(s.at(i) == s.at(j)){
                ans = "No";
            }
        }
    }

    cout << ans << endl;

    return 0;
}