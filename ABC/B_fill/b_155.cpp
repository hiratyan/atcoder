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
    int n;
    cin >> n;
    vector<int> vec(n);
    rep(i, 0, n) cin >> vec.at(i);
    for(int i = 0; i < n; i++){
        if(vec.at(i) % 2 == 0){
            if(vec.at(i) % 3 == 0 || vec.at(i) % 5 == 0){
                continue;
            } else {
                cout << "DENIED" << endl;
                return 0;
            }
        } 
    }

    cout << "APPROVED" << endl;

    return 0;
}