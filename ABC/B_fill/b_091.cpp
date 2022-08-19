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
    string tmp;
    map<string, int> ma;
    rep(i, 0, n){
        cin >> tmp;
        if(!ma.count(tmp)){
            ma[tmp] = 0;
        }
        ma.at(tmp)++;
    }
    int m;
    cin >> m;
    rep(i, 0, m){
        cin >> tmp;
        if(!ma.count(tmp)){
            ma[tmp] = 0;
        }
        ma.at(tmp)--;
    }

    int ans = 0;
    for(auto itr : ma){
        ans = max(itr.second, ans);
    }

    cout << ans << endl;

    return 0;
}

/*
int main() {
    int n;
    cin >> n;
    vector<string> blue(n);
    rep(i, 0, n) cin >> blue.at(i);

    int m;
    cin >> m;
    vector<string> red(m);
    rep(i, 0, m) cin >> red.at(i);
    
    map<string, int> map;   
    
    for(int i = 0; i < n; i++){
        if(map.count(blue.at(i))){
            map.at(blue.at(i)) = 1;
        }
        map[blue.at(i)] = 1;
    }

  
    for(int i = 0; i < m; i++){
        if(!map.at(red.at(i))){
            continue;
        }
        map[red.at(i)]--;
    }

    int max = 0;
    string ans;
    for(int i = 0; i < n; i++){
        if(max < map.at(blue.at(i))){
            max = map.at(blue.at(i));
            ans = blue.at(i);
        }
    }

    cout << ans << endl;
    
    return 0;
}
*/