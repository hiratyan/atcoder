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
    int s, t, cnt = 0;
    cin >> s >> t;
    for(int a = 0; a <= 100; a++){
        for(int b = 0; b <= 100; b++){
            for(int c = 0; c <= 100; c++){
                if(a + b + c <= s && a * b * c <=t){
                    cnt++;
                }
            }
        }
    }

    cout << cnt << endl;

    return 0;
}