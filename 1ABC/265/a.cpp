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
	int x, y, n, cost, ans = 1000000;
	cin >> x >> y >> n;
	for(int i = 0; i < 1000; i++){
		for(int j = 0; j < 1000; j++){
			if(i + 3 * j == n){
				cost = i * x + j * y;
				ans = min(ans, cost);
			}
		}
	}

	cout << ans << endl;

	return 0;
}