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

int main() {
    int a_place = 0, z_place = 0, a_flag = -1;
    string s;
    cin >> s;
        
    rep(i, 0, s.size()){
        if(s.at(i) == 'A'){
            if(a_flag < 0){
                a_place = i;
                a_flag = 1;    
            }
        }
        if(s.at(i) == 'Z'){
            z_place = i;
        }        
    }

    cout << z_place - a_place + 1 << endl;
    return 0;
}