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

//二進数変換するアルゴリズム
void Binary(int x) {
    int bit[30];
    for (int i = 0; i < 30; i++) {
        int Div = (1 << i);
        bit[i] = (x / Div) % 2;
    }
}

//引数の桁数を返す．
int num_digits(int x){
    int c = 0;
    while(x > 0){
        x /= 10;
        c++;
    }
    return c;
}

//引数の文字列の辞書順で大きい方を返す関数．
string l_max(string a,string b)
{
    if(a >= b){
        return a;
    }
    return b;
}

string super_max(string a,string b, string c)
{
    if(a >= b){
        if(c >= a){
            return c;
        } else {
            return a;
        }    
    } else if(b >= a){
        if(c >= b){
            return c;
        } else {
            return b;
        }
    }else if(b >= c){
        if(a >= b){
            return a;
        } else {
            return b;
        }
    } else if(c >= b){
        if(b >= c){
            return b;
        } else {
            return c;
        }
    }else if(c >= a){
        if(b >= c){
            return b;
        } else {
            return c;
        }
    } else if(a >= c){
        if(b >= a){
            return b;
        } else {
            return a;
        }
    }
}

// k 進法表記の数字を 10 進法表記で表す関数
ll hex_conv(ll k, ll x){
    ll ans = 0;
    ll count = 1;
    while(x > 0){
        ans += x % 10 * count;
        x /= 10;
        count *= k;
    }
    return ans;
}