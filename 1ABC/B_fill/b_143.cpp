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
int main() {
    int n, cnt = 0;
    cin >> n;
    vector<int> vec(n);
    rep(i, 0, n) cin >> vec.at(i);
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            cnt += vec.at(i) * vec.at(j);
        }
    }

    cout << cnt << endl;

    return 0;
}
*/

int main(){
    int n, sum = 0;
    cin >> n;
    vector<int> vec(n);
    rep(i, 0, n) cin >> vec.at(i);
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            sum += vec.at(i) * vec.at(j);
        }
    }
    cout << sum << endl;
    return 0;
}





