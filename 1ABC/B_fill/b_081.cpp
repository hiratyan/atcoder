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
  int n, a, c = 0;
  cin >> n;
  vector<int> vec(n);

  for(int i = 0; i < n; i++){
    cin >> a;
    vec.at(i) = a;
  }

  bool flag = true;

  while(flag){
    for(int j = 0; j < n; j++){
      if(vec.at(j) % 2 == 0){
        vec.at(j) = vec.at(j) / 2;
      } else {
        flag = false;
        break;
      }
    }
    c++;
  }

  cout << c - 1 << endl;
  return 0;
}