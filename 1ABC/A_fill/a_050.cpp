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
  int a, b;
  char op;
  cin >> a >> op >> b;

  if(op == '+'){
    cout << a + b << endl;
  } else {
    cout << a - b << endl;
  }

  return 0;
}