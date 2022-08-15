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
  int n, m, a;
  cin >> n >> m;

  map<int, int> map;

  for(int i = 1; i <= n; i++){
    map[i] = 0;
  }

  for(int i = 1; i <= 2 * m; i++){
    cin >> a;
    map[a] += 1;
  }

  for(int i = 1; i <= n; i++){
    cout << map.at(i) << endl;
  }

  return 0;
}