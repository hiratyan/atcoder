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
  int a;

  vector<int> vec(5);
  vector<int> flag(4, 0);

  for(int i = 0; i < 5; i++){
    cin >> a;
    vec.at(i) = a;
  }

  sort(vec.begin(), vec.end());

  for(int i = 0; i < 4; i++){
    if(vec.at(i) != vec.at(i+1)){
      flag.at(i) = 0;
    } else {
      flag.at(i) = 1;
    }
  }

  if(flag.at(0) == 1 && flag.at(1) == 0 && flag.at(2) == 1 && flag.at(3) == 1){
    cout << "Yes";
  } else if(flag.at(0) == 1 && flag.at(1) == 1 && flag.at(2) == 0 && flag.at(3) == 1){
    cout << "Yes";
  } else {
    cout << "No";
  }

  return 0;
}