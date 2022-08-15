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
  int n, a, k, v = 0, c = 0;
  cin >> n;

  vector<int> button(n);

  for(int i = 0; i < n; i++){
    cin >> a;
    button.at(i) = a;
  }

  while(n){
    c++;
    k = button.at(v);
    if(k == 2){
        cout << c << endl;
        return 0;;
    }
    v = k - 1;
    n--;
  }

  cout << -1 << endl;

  return 0;
}