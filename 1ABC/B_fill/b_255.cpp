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
    string s, max, min, keep_s;
    int k = 0;
    cin >> s;
    min = s;
    max = s;
    s += s;

    for(int i = 0; i < (int)s.size() / 2; i++){
        for(int j = i; k < (int)s.size() / 2; j++){
            keep_s += s.at(j);
            k++;
        }        
        if(max < keep_s){
            max = keep_s;
        }
        keep_s = "";
        k = 0;
    }

    for(int i = 0; i < (int)s.size() / 2; i++){
        for(int j = i; k < (int)s.size() / 2; j++){
            keep_s += s.at(j);
            k++;
        }        
        if(min > keep_s){
            min = keep_s;
        }
        keep_s = "";
        k = 0;
    }

    cout << min << endl;
    cout << max << endl;

    return 0;
}