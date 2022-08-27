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
    int N;
    cin >> N;
    vector<int> vec(N);
    for (int i = 0; i < N; ++i) cin >> vec[i];
    sort(vec.begin(), vec.end());
    int ans = 0;
    /*
    for (int k = 0; k < N; ++k) {
        for (int j = 0; j < k; ++j) {
            for (int i = 0; i < j; ++i) {
                if (vec[k] != vec[j] and vec[i] != vec[j] and
                    vec[i] + vec[j] > vec[k]) {
                    ans++;
                }
            }
        }
    }
    */
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            for (int k = j + 1; k < N; ++k) {
                if (vec[k] != vec[j] and vec[i] != vec[j] and
                    vec[i] + vec[j] > vec[k]) {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}