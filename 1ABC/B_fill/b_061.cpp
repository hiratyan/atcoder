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

int main(){
  int n, m, a;
  cin >> n >> m;
  vector<int> vec(n, 0);
  rep(i, 0, m * 2){
      cin >> a;
      vec.at(a - 1)++;
  }
  rep(i, 0, n) cout << vec.at(i) << endl;;
  return 0;
}










/*
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
*/