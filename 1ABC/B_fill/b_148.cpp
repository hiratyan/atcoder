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
    string s, t;
    cin >> n >> s >> t;
    vector<char> vec(n*2);
    int j = 0;
    for(int i = 0; i < n*2; i += 2){
        vec.at(i) = s.at(j);
        vec.at(i + 1) = t.at(j);
        j++;
    }
    rep(i, 0, n*2) cout << vec.at(i);


    return 0;
}