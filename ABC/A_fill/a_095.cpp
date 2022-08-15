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
    int c = 0;

    for(int i = 0; i < 3; i++){
        if(s.at(i) == 'o'){
            c++;
        }
    }

    cout << 700 + c * 100 << endl;

    return 0;
}