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
    string S, T = "ATCG";
    int N, ans = 0;
    cin >> S;
    N = S.length;

    for(int L = 0; L < N; L++){
        for(int R = L; R < n; R++){
            int ok = 1;
            for(int x = L; x < R + 1; x++){
                if(T.find(S[x]) == nops){
                    ok = 0;
                }
            }
            if(ok){
                chmax(ans, R - L + 1);
            }
        }
    }

    cout << s << endl;
    return 0;
}