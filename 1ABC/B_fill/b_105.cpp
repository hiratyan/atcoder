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

/*
int main(){
    int n;
    cin >> n;

    for(int i = 0; i <= 25; i++){
        for(int j = 0; j < 14; j++){
            if(i*4 + j*7 == n){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}
*/

/*
int main() {
    int n;
    cin >> n;

    for(int i = 0; i <= 15; i++){
        for(int j = 0; j <= 25; j++){
            if(n == 7 * i + 4 * j){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}
*/

int main(){
    int n;
    string ans = "No";
    cin >> n;
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            if(4 * i + 7 * j == n){
                ans = "Yes";
            }
        }
    }
    cout << ans << endl;
    return 0;
}