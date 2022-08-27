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
    int a, b;
    cin >> a >> b;

    if(a > 0 && b > 0){
        cout << "Alloy" << endl;
        return 0;
    } else if(a > 0){
        cout << "Gold" << endl;
        return 0;
    } else {
        cout << "Silver" << endl;
        return 0;
    }

    return 0;
}
//3:41