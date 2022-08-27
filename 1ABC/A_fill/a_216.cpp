#include <bits/stdc++.h>
using namespace std;
//#include <atcoder/all>
//using namespace atcoder;
#define rep(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
#define rep0(i, n) for (int i = 1; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
//using mint = modint1000000007;

int main() {
    double n, s;
    cin >> n;
    s = n * 10.0;
    s = fmod(s, 10.0);
    if(s >= 7){
        cout << n - s / 10 << '+' << endl;
        return 0;
    } else if(s >= 3){
        cout << n - s / 10 << endl;
        return 0;
    } else {
        cout << n - s / 10 << '-' << endl;
        return 0;
    }


    return 0;
}