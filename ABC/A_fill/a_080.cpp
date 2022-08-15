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
  string n;
  cin >> n;
  vector<int> vec(4);

  for(int i = 0; i < 4; i++){
    vec.at(i) = n.at(i);
  }

  sort(vec.begin(), vec.end());

  if(vec.at(0) == vec.at(2)){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}