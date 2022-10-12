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
#define infl 9223372036854775807

/*
int main() {
    int A, B, C, X, Y;
    cin >> A >> B >> C >> X >> Y;
    
    ll ans = 10000000000;

    for(int ab = 0; ab < 201010; ab += 2){
        ll sm = C * ab;

        ll x = X - ab / 2;
        ll y = Y -ab / 2;

        if(0 < x){ 
            sm += x * A;
        }
        if(0 < y){
            sm += y * B;
        }

        ans = min(ans, sm);
    }

    cout << ans << endl;
    return 0;
}
*/

int main(){
    ll a, b, c, x, y, ans = infl;
    cin >> a >> b >> c >> x >> y;

    rep(ab, 0, 201010){
        ll sm = c * ab;

        ll X = x - ab / 2;
        ll Y = y - ab / 2;

        if(0 < X) sm += X * a;
        if(0 < Y) sm += Y * b;

        if(sm < ans){
            ans = sm;
        }

        ab++;
    }

    cout << ans << endl;

    return 0;
}