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

int main(){
    int n, y;
    cin >> n >> y;
    int res10000 = -1, res5000 = -1, res1000 = -1;
    for(int a = 0; a <= n; a++){
        for(int b = 0; b + a <= n; b++){
            for(int c = 0; c + b + a <= n; c++){
                int total = 10000*a + 5000*b + 1000*c;
                if(total == y){
                    res10000 = a; res5000 = b, res1000 = c;
                }
            }
        }
    }
    cout << res10000 << " " << res5000 << " " << res1000 << endl;
}

/*
int main(){
    int n, y;
    cin >> n >> y;
    int res10000 = -1, res5000 = -1, res1000 = -1;
    for(int a = 0; a < n; a++){
        for(int b = 0; b + a < n; b++){
            int c = n - a - b;
            int total = 10000*a + 5000*b + 1000*c;
            if(total == y){
                res10000 = a; res5000 = b, res1000 = c;
            }
        }
    }
    cout << res10000 << " " << res5000 << " " << res1000 << endl;
}
*/

/*
int main() {
    int n, y;
    cin >> n >> y;
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    for(int i = 0; i < 2000; i++){
        if(y < 10000){
            for(int j = 0; j < 2000; j++){
                if(y < 5000){
                    for(int k = 0; k < 2000; k++){
                        y -= 1000;
                        cnt3++;
                        if((cnt1 + cnt2 + cnt3) > n){
                            cout << -1 << ' ' << -1 << ' ' << -1 << endl;
                            return 0;
                        }

                        //cout << y << ':' << cnt1 << ' ' << cnt2 << ' ' << cnt3 << endl;

                        if(y == 0){
                            cout << cnt1 << ' ' << cnt2 << ' ' << cnt3 << endl;
                            return 0;
                        } else if(y < 0){
                            cout << -1 << ' ' << -1 << ' ' << -1 << endl;
                            return 0;
                        }
                    }
                }
                y -= 5000;
                cnt2++;
                if((cnt1 + cnt2 + cnt3) > n){
                    cout << -1 << ' ' << -1 << ' ' << -1 << endl;
                    return 0;
                }

                //cout << y << ':' << cnt1 << ' ' << cnt2 << ' ' << cnt3 << endl;

                if(y == 0){
                    cout << cnt1 << ' ' << cnt2 << ' ' << cnt3 << endl;
                    return 0;
                } else if(y < 0){
                    cout << -1 << ' ' << -1 << ' ' << -1 << endl;
                    return 0;
                }
            }
        }
        y -= 10000;
        cnt1++;
        if((cnt1 + cnt2 + cnt3) > n){
            cout << -1 << ' ' << -1 << ' ' << -1 << endl;
            return 0;
        }

        //cout << y << ':' << cnt1 << ' ' << cnt2 << ' ' << cnt3 << endl;

        if(y == 0){
            cout << cnt1 << ' ' << cnt2 << ' ' << cnt3 << endl;
            return 0;
        } else if(y < 0){
            cout << -1 << ' ' << -1 << ' ' << -1  <<  endl;
            return 0;
        }
    }
    return 0;
}
*/