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
    int n, a, b, x = 0, k = 0, ans = 0;
    cin >> n >> a >> b;

    for(int i = 1; i <= n; i++){
        x = i;/*
        for(int j = 0; j < 4; j++){
            k += x % 10; 
            if(x < 10){
                break;
            }
            x = x / 10;
        }*/
        while(x > 0){
            k += x % 10;
            x = x / 10;
        }
        if(a <= k && k <= b){
            ans += i;
        }
        k = 0;
    }

    cout << ans << endl;

    return 0;
}