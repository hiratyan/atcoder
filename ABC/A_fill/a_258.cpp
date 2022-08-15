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
    int k;
    cin >> k;
    int HH = 21;

    if(k >= 60){
        k -= 60;
        HH = 22;
        if(k < 10){
            if(k == 0){
                
            }
            cout << HH << ":0" << k << endl;
            return 0;
        }
    }

    if(k < 10){
        cout << HH << ":0" << k << endl;
        return 0;
    }
    
    cout << HH << ':' << k << endl;

    return 0;
}