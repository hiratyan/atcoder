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
    cin >> S;
    bitset<3> bitans;
    for(int tmp = 0; tmp < (1 << 3); tmp++){
        bitset<3> bit(tmp);

        int sum = S.at(0) - '0';

        for(int i = 1; i <= 3; i++){
            if(bit.test(3 - i)){
                sum += S.at(i) - '0';
            } else {
                sum -= S.at(i) - '0';
            }
        }

        if(sum == 7){
            bitans = bit;
            break;
        }
    }

    for(int i = 0; i < S.size(); i++){
        cout << S.at(i);
        if(i < S.size() - 1){
            if(bitans.test(2 - i)){
                cout << '+';
            } else {
                cout << '-';
            }
        }
    }

    return 0;
}