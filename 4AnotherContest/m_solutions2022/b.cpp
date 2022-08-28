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
const ll INF = 1LL << 60; //無限大
const ll MOD = 1000000007; //10^9 + 7

int main() {
    int red, green, blue, k, red_keep, green_keep, blue_keep;
    cin >> red >> green >> blue >> k;

    red_keep = red; green_keep = green; blue_keep = blue;

    for(int j = 0; j <= k + 1; j++){
        for(int i = 0; i <= k - j + 2; i++){
            for(int l = 0; l <= k - j - i + 3; l++){
                red = 1 << j; green = 1 << i; blue = 1 << l;
                if(green > red && blue > green){
                    cout << "Yes" << endl;
                    return 0;
                }
                red = red_keep; green = green_keep; blue = blue_keep;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}