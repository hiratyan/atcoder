#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
#define rep(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;

int main(){
    int n, alice = 0, bob = 0;
    cin >> n;
    vector<int> vec(n);
    rep(i, 0, n) cin >> vec.at(i);
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            alice += vec.at(i);
        } else {
            bob += vec.at(i);
        }        
    }

    cout << alice - bob << endl;
    return 0;
}


















/*
int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec.at(i);
    }
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());

    int alice = 0, bob = 0;

    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            alice += vec.at(i);
        } else {
            bob += vec.at(i);
        }
    }

    cout << alice - bob << endl;

    return 0;
}*/