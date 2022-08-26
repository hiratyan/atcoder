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
    int n, m;
    scanf("%d %d", &n, &m);
    vector<long long> a(n), b(m);
    for (int i = 0; i < n; i++) {
        scanf("%lld", &(a[i]));
    }
    for (int i = 0; i < m; i++) {
        scanf("%lld", &(b[i]));
    }

    vector<long long> c = convolution(a, b);

    for (int i = 0; i < n + m - 1; i++) {
        printf("%lld ", c[i]);
    }
    printf("\n");

    return 0;
}

/*int main() {
    int N, K;
    cin >> N >> K;
    vector<int> vec(N);
    for(int i = 0; i < N; i++){
        cin >> vec.at(i);
    }

    bool ans = false;

    for(int tmp = 0; tmp < (1 << 20); tmp++){
        bitset<20> bit(tmp);

        int sum = 0;
        for(int j = 0; j < N; j++){
            if(bit.test(j)){
                sum += vec.at(j);
            }
        }

        if(sum == K){
            ans = true;
        }
    }

    if (ans) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}*/
/*
int main(){
    int i = 7;
    int j = 9;
    int ans = 12;
    chmod(ans, i);

}
*/