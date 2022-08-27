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
    int n, a, ans = 0;
    cin >> n;
    set<int> set;
    for(int i = 0; i < n; i++){
        cin >> a;
        set.insert(a);
    }
    for(int i = 1; i < 101; i++){
        if(set.count(i)){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}

/*
int main(){
    int n, c = 1;
    cin >> n;
    vector<int> vec(n);
    rep(i, 0, n) cin >> vec.at(i);
    sort(vec.begin(), vec.end());
    for(int i = 0; i < n - 1; i++){
        if(vec.at(i) != vec.at(i + 1)){
            c++;
        }
    }
    cout << c << endl;
}
*/

/*
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
*/