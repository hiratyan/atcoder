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
    int n;
    cin >> n;
    vector<vector<int>> vec(10, vector<int>(10, 0));
    for(int i = 1; i <= 9; i++){
        for(int j = 1; j <= 9; j++){
            vec.at(i).at(j) = i * j;
            if(vec.at(i).at(j) == n){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}















/*
int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= 9; i++){
        for(int j = 1; j <= 9; j++){
            if(n == i * j){
                cout << "Yes" << endl;
                return 0;
            }
        }        
    }

    cout << "No" << endl;

    return 0;
}
*/