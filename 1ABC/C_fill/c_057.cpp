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

int num_digits(int64_t x){
    int c = 0;
    while(x > 0){
        x /= 10;
        c++;
    }
    return c;
}

int main() {
    int64_t n, A, B, A_dig, B_dig, ans = 100000000000, keep = -1;
    cin >> n;
    for(int64_t i = 1; i <= n / 4; i++){
        A = i;
        B = n / A;
        if(floor(B)){ 
            if(A * B == n){
                //cout << A << ':' << B << endl;
                A_dig = num_digits(A);
                B_dig = num_digits(B);
                //cout << A_dig << ':' << B_dig << endl;
                keep = max(A_dig, B_dig);
                if(keep > ans){
                    break;
                }
                ans = min(ans, keep);   
                //cout << ans << endl;       
            }
        }
    }

    cout << ans << endl;

    return 0;
}