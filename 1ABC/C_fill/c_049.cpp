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
    string S;
    cin >> S;
    vector<string> divide = {"dream", "dreamer", "erase", "eraser"};
    reverse(S.begin(), S.end());
    for(int i = 0; i < 4; i++){
        reverse(divide.at(i).begin(), divide.at(i).end());
    }

    bool can = true;
    for(int i = 0; i < S.size();){
        bool can2 = false;
        for(int j = 0; j < 4; j++){
            string d = divide.at(j);
            if(S.substr(i, d.size()) == d){
                can2 = true;
                i += d.size();
            }
        }
        if(!can2){
            can = false;
            break;
        }
    }

    if (can) cout << "YES" << endl;
    else cout << "NO" << endl;  

    return 0;
}