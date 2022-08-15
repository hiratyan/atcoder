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
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  int l = a + b;
  int r = c + d;

  if(l > r){
    cout << "Left" << endl;
  } else if(l == r){
    cout << "Balanced" << endl;    
  } else {
    cout << "Right" << endl;
  }

  return 0;
}