#include <bits/stdc++.h>
using namespace std;
//#include <atcoder/all>
//using namespace atcoder;
#define rep(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
#define rep0(i, n) for (int i = 1; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
//using mint = modint1000000007;

int main() {
    int n, ans_s, ans;
    cin >> n;
    vector<int> vec(n);
    vector<int> keep(n);
    rep(i, 0, n) cin >> vec.at(i);
    keep = vec;
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());
    ans_s = vec.at(1);
    for(int i = 0; i < n; i++){
        if(keep.at(i) == ans_s){
            ans = i;
        }
    }
    cout << ans + 1 << endl;

    return 0;
}
//6:47