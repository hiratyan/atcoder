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
  int n;
  cin >> n;
  bool flag = false;
  char s;
  for(int i = 0; i < n; i++){
    cin >> s;
    if(s == 'Y'){
      flag = true;
      break;
    }
  }

  if(flag){
    cout << "Four" << endl;
  } else {
    cout << "Three" << endl;
  }

}