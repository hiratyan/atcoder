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
    int n;
    cin >> n;
    vector<pair<string, string>> vec_pair(n);
    for(int i = 0; i < n; i++){
        cin >> vec_pair.at(i).first >> vec_pair.at(i).second;
    }

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(vec_pair.at(i).first == vec_pair.at(j).first &&
               vec_pair.at(i).second == vec_pair.at(j).second){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;

    return 0;
}