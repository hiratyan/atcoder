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

int num_digits(int x){
    int c = 0;
    while(x > 0){
        x /= 10;
        c++;
    }
    return c;
}

int main() {
    int keep;
    string ans;
    vector<string> vec(4);
    for(int i = 0; i <= 3; i++){
        if(i == 3){
            cin >> keep;
            vec.at(3) = to_string(keep);
            break;
        }
        cin >> vec.at(i);
    }
    ans = "";

    for(int i = 0; i < (int)vec.at(3).size(); i++){
        keep = vec.at(3).at(i) - 49;
        ans += vec.at(keep);
    }

    cout << ans << endl;

    return 0;
}