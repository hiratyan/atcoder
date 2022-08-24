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
    string s;
    cin >> s;
    if(s.at(0) == s.at(1) && s.at(1) == s.at(2) && s.at(2) == s.at(3)){
        cout << "Weak" << endl;
        return 0;
    } else if(((int)s.at(1) % 10 == ((int)s.at(0) + 1) % 10 && (int)s.at(2) % 10 == ((int)s.at(1) + 1) % 10 && (int)s.at(3) % 10 == ((int)s.at(2) + 1) % 10)
               /*||
              ((int)s.at(2) % 10 == ((int)s.at(1) + 1) % 10 && (int)s.at(3) % 10 == ((int)s.at(2) + 1) % 10)*/){
        cout << "Weak" << endl;
        return 0;
    }

    cout << "Strong" << endl;

    return 0;
}
//16:21