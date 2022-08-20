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
/*
int main() {
    int n, ansx, ansy, ansz, hatena;
    string x, y, z, a;
    cin >> n;
    vector<int> vec(n);
    rep(i, 0, n) cin >> vec.at(i);
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());
    ansx = vec.at(0);
    ansy = vec.at(1);
    ansz = vec.at(2);
    x = to_string(vec.at(0)).at(0);
    y = to_string(vec.at(1)).at(0);
    z = to_string(vec.at(2)).at(0);
    x2 = to_string(vec.at(0))[1];
    y2 = to_string(vec.at(1))[1];
    z2 = to_string(vec.at(2))[1];
    x2 = to_string(vec.at(0))[2];
    y2 = to_string(vec.at(1))[2];
    z2 = to_string(vec.at(2))[2];
    //a = max(x, y);
    //cout << super_max("aiueo", "iueo" , "xxxx") << endl;

if(x == super_max(x, y, z)){
        if(y == l_max(y, z)){
            //x y z
            cout << ansx << ansy << ansz << endl;
            return 0;
        } else {
            //x z y
            cout << ansx << ansz << ansy << endl;
            return 0;
        }
    } else if(y == super_max(x, y, z)){
        if(x == l_max(x, z)){
            //y x z
            cout << ansy << ansx << ansz << endl;
            return 0;
        } else {
            //y z x
            cout << ansy << ansz << ansx << endl;
            return 0;
        }
    } else {
        if(x == l_max(x, y)){
            //z x y
            cout << ansz << ansx << ansy << endl;
            return 0;
        } else {
            //z y x
            cout << ansz << ansy << ansx << endl;
            return 0;
        }
    }
    //cout << x << ':' << y << ':' << z << endl;


    return 0;
}
*/

int main(){
    int n;
    string x, y, z, keep1, keep2, keep3, keep4, keep5, keep6, keepF, keepS, keepL;
    cin >> n;
    vector<int> vec(n);
    rep(i, 0, n) cin >> vec.at(i);
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());
    x = to_string(vec.at(0));
    y = to_string(vec.at(1));
    z = to_string(vec.at(2));
    keep1 = x + y + z;
    keep2 = x + z + y;
    keep3 = y + x + z;
    keep4 = y + z + x;
    keep5 = z + x + y;
    keep6 = z + y + x;
    keepF = super_max(keep1, keep2, keep3);
    keepS = super_max(keep4, keep5, keep6);
    keepL = l_max(keepF, keepS);
    cout << keepL << endl;
}