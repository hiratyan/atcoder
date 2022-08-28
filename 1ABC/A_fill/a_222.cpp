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
const ll INF = 1LL << 60; //無限大
const ll MOD = 1000000007; //10^9 + 7

//引数の桁数を返す．
int num_digits(int x){
    int c = 0;
    while(x > 0){
        x /= 10;
        c++;
    }
    return c;
}

int main() {
    int n, d;
    cin >> n;
    d = num_digits(n);
    if(d == 1){
        cout << "000" << n << endl;
    } else if(d == 2){
        cout << "00" << n <<endl;
    } else if(d == 3){
        cout << "0" << n << endl;
    } else if(d == 0){
        cout << "0000" << endl;
    } else if(d == 4){
        cout << n << endl;
    }


    return 0;
}

//桁合わせ https://webkaru.net/clang/align-printf-output/
