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
  int l1, r1, l2, r2;
  cin >> l1 >> r1 >> l2 >> r2;

  cout << max(0, min(r1, r2) - max(l1, l2)) << endl;

/*
  vector<int> A(100, 0);
  vector<int> B(100, 0);

  int c = 0;

  if(l1 == 0 && l2 == 0 && r1 == r2){
    c++;
  }
  
  if(l1 == 0){
    l1++;
  }
  if(l2 == 0){
    l2++;
  }
  for(int i = l1 - 1;  i < r1; i++){
    A.at(i) = 1;
  }
  for(int i = l2 - 1;  i < r2; i++){
    B.at(i) = 1;
  }

  for(int i = 0; i < 100; i++){
    if(A.at(i) == 1 && B.at(i) == 1){
      c++;
    }
  }
  
  if(c == 0){
    c++;
  }

  cout << c - 1 << endl;
*/

  return 0;
}