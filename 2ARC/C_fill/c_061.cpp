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
    string S;
    int ans = -1;
    cin >> S;
    vector<int> vec(S.size());
    rep(i, 0, S.size()) vec.at(i) = S.at(i) - '0';

    for(int tmp = 0; tmp < (1 << S.size() - 1); tmp++){
        bitset<10> bit(tmp);
        int sum = 0;
        for(int j = 0; j < 10; j++){
            if(bit.test(j)){
                sum += vec.at(j);
            }
        }
        ans = max(ans, sum);
    }

    cout << ans << endl;

    return 0;
}