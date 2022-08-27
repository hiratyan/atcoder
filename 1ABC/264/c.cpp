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
    string s;
    cin >> s;
    int c = 0, x;
    for(int i = 0; i < 7; i++){
        if(s.at(i) == 'a'){
            c += i;
            x = i;
            break;
        }
    }
    s.erase(s.begin() + x);
    s = 'a' + s;
    //cout << s << endl;

    for(int i = 1; i < 7; i++){
        if(s.at(i) == 't'){
            c += i - 1;
            x = i;
            break;
        }
    }
    s.erase(s.begin() + x);
    s = 't' + s;
    //cout << s << endl;

    for(int i = 2; i < 7; i++){
        if(s.at(i) == 'c'){
            c += i - 2;
            x = i;
            break;
        }
    }
    s.erase(s.begin() + x);
    s = 'c' + s;
    //cout << s << endl;

    for(int i = 3; i < 7; i++){
        if(s.at(i) == 'o'){
            c += i - 3;
            x = i;
            break;
        }
    }
    s.erase(s.begin() + x);
    s = 'o' + s;
    //cout << s << endl;

    for(int i = 4; i < 7; i++){
        if(s.at(i) == 'd'){
            c += i - 4;
            x = i;
            break;
        }
    }
    s.erase(s.begin() + x);
    s = 'd' + s;
    //cout << s << endl;

    for(int i = 5; i < 7; i++){
        if(s.at(i) == 'e'){
            c += i - 5;
            x = i;
            break;
        }
    }
    s.erase(s.begin() + x);
    s = 'e' + s;
    //cout << s << endl;

    cout << c << endl;

    return 0;
}