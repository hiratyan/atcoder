#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;

int main() {
  string s;
  cin >> s;

  sort(s.begin(), s.end());

  if((s.at(0) == s.at(1) && s.at(0) == s.at(2))){
    cout << -1 << endl;
  } else if(s.at(0) == s.at(1)){
    cout << s.at(2) << endl;
  } else {
    cout << s.at(0) << endl;
  }
}