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
  int h, w;
  char c;
  cin >> h >> w;

  vector<vector<char>> vec(h + 2, vector<char>(w + 2, '#'));

  for(int i = 0; i < h + 2; i++){
    for(int j = 0; j < w + 2; j++){
      if(i == 0 || i == h + 1 || j == 0 || j == w + 1){
        continue;
      } else {
        cin >> c;
        vec.at(i).at(j) = c;
      }
    }
  }

  for(int i = 0; i < h + 2; i++){
    for(int j = 0; j < w + 2; j++){
      cout << vec.at(i).at(j);
      if(j == w + 1){
        cout << endl;
      }
    }
  }

  return 0;
}