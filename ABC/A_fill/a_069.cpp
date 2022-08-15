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

/*
int main() {
    string s;
    cin >> s;
    int c = 0;
    char one, last;
    one = s.at(0);
    last = s.at(s.size() - 1);

    c = s.size() - 2;

    cout << one << c << last << endl;


    return 0;
}
*/

int main() {
    string s;
    cin >> s;
    int c = 0;

    c = s.size() - 2;

    cout << s.at(0) << c << s.at(s.size() - 1) << endl;


    return 0;
}