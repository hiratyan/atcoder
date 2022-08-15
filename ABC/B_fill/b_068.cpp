#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;

/* 
int main() {
    int n, k, c, ans = 0;
    cin >> n;
    bool flag = true;

    for(int i = 1; i <= n; i++){
        flag = true;
        c = 0;
        k = i;
        while(flag){
            if(k % 2 == 0){
                c++;
                k = k / 2;
            } else {
                flag = false;
            }
        }
        ans = max(ans, c);
    }

    int ans2 = 1;

    for(int i = 0; i < ans; i++){
        ans2 *= 2;
    }

    cout << ans2 << endl;

    return 0;
}
*/

/*
int main(){
    int n, k, c, ans = 0;
    cin >> n;

    for(int i = 1; i <= n; i++){
        c = 0;
        k = i;
        while(k % 2 == 0){
            k /= 2;
            c++;
        }
        if(ans < c){
            ans = i;
        }
    }

    cout << ans << endl;

    return 0; 
}*/

int main() {
    int N
    cin >> N;
    int macnt = -1, ans = -1;
    rep(x, 1, N + 1) {
        int cnt = 0;
        int y = x;
        while (y % 2 == 0) y /= 2, cnt++;
        if (macnt < cnt) macnt = cnt, ans = x;
    }
 
    cout << ans << endl;
}