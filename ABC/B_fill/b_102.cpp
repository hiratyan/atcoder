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
    int n;
    cin >> n;
    vector<int> vec(n);

    rep(i, 0, n){
        cin >> vec.at(i);
    }

    sort(vec.begin(), vec.end());

    cout << abs(vec.at(0) - vec.at(n -1)) << endl;

    return 0;
}
*/

int main(){
    int n, ans, max = 0, min = -1;
    cin >> n;
    rep(i, 0, n){
        cin >> ans;
        if(last < ans){
            last = ans;
        }
    }

    cout << last << endl;
}