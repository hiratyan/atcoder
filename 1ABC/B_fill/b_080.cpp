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
  int n, c = 0;
  cin >> n;

  int x = n;

  for(int i = 0; i < 100000000; i++){
    c += x % 10;
    x = x / 10;
    if(x == 0){
      break;
    }
  }
/*
  while(x){
    c += x % 10;
    x = x / 10;    
  }
*/

  if(n % c == 0){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}