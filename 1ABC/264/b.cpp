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
    int r, c;
    cin >> r >> c;
    int d;

    vector<vector<int>> vec(15, vector<int>(15, 1));

    
    d = 0;
    for(int i = 0; i < 15 - i; i += 2){
        for(int j = 0 + d; j < 15 - d; j++){
            vec.at(i).at(j) = 0;
            vec.at(j).at(i) = 0;
        }
        d += 2;
    }
    for(int i = 0; i < 15; i++){
        vec.at(14).at(i) = 0;
        vec.at(i).at(14) = 0;
    }
    for(int i = 2; i < 13; i++){
        vec.at(12).at(i) = 0;
        vec.at(i).at(12) = 0;
    }
    for(int i = 4; i < 11; i++){
        vec.at(10).at(i) = 0;
        vec.at(i).at(10) = 0;
    }
    for(int i = 6; i < 9; i++){
        vec.at(8).at(i) = 0;
        vec.at(i).at(8) = 0;
    }
/*
    for(int i = 0; i < 15; i++){
        for(int j = 0; j < 15; j++){
            cout << vec.at(i).at(j);
            if(j == 14){
                cout << endl;
            }
        }
    }
    */

    if(vec.at(r - 1).at(c - 1) == 0){
        cout << "black" << endl;
    } else {
        cout << "white" << endl;
    }

    return 0;
}