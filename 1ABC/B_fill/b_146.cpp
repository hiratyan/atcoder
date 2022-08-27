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
    int n;
    string s;
    cin >> n >> s;
    for(int i = 0; i < s.size(); i++){
        if(s.at(i) + n > 'A' + 25){
            s.at(i) -= 26;
        }
        s.at(i) = s.at(i) + n;
    }
    cout << s << endl;

    return 0;
}