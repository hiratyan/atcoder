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
int num_digits(int x){
    int c = 0;
    while(x > 0){
        x /= 10;
        c++;
    }
    return c;
}

int main(){
    int n, ans = 0;
    cin >> n;
    if(n < 10){
        ans += n;
    } else if(10 <= n && n < 100){
        ans = 9;
    } else if(100 <= n && n < 1000){
        ans += 9 + n - 99;
    } else if(1000 <= n && n < 10000){
        ans = 9 + 900;
    } else if(10000 <= n && n < 99999){
        ans += 9 + 900 + n - 9999;
    } else {
        ans = 90909;
    }
    cout << ans << endl;
    return 0;
}







/*
int main() {
    int n, ans = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        if((1 <= i && i <= 9) ||
           (100 <= i && i <= 999) ||
           (10000 <= i && i <= 99999)){
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
*/