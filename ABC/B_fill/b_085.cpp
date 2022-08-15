#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;

int main() {
    int n, c = 1;
    cin >> n;
    vector<int> mochi(n);
    for(int i = 0; i < n; i++){
        cin >> mochi.at(i);
    }

    sort(mochi.begin(), mochi.end());

    for(int i = 0; i < n - 1; i++){
        if(mochi.at(i) == mochi.at(i + 1)){
            continue;
        } else {
            c++;
        }
    }

    cout << c << endl;

    return 0;
}