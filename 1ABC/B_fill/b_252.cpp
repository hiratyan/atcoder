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
    int n, k, most_taste = -1, most_food;
    cin >> n >> k;
    vector<int> food(n);
    vector<int> taste(k);
    rep(i, 0, n) cin >> food.at(i);
    rep(i, 0, k) cin >> taste.at(i);
    for(int i = 0; i < n; i++){
        if(most_taste < food.at(i)){
            most_food = i;
            most_taste = food.at(i);
        }
    }

    for(int i = 0; i < k; i++){
        if(food.at(taste.at(i) - 1) == most_taste){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}