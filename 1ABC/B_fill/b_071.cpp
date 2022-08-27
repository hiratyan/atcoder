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
    string s;
    cin >> s;
    vector<bool> vec(26);
    for(int i = 0; i < 26; i++){
        vec.at(i) = false;
    }
    for(int i = 0; i < s.size(); i++){
        vec.at(s.at(i) - 'a') = true;
        // aは97，bは98，cは99...
        //よってs.at(i) - 'a' はs.at(i) が c のとき 2 となる.
        //よってvec の3番目が1となる．
    }
    for(int i = 0; i < 26; i++){
        if(!vec.at(i)){
            cout << (char)(i + 'a') << endl;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}