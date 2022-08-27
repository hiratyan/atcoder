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
	long long n, m, t;
	cin >> n >> m >> t;
	vector<int> need_time(1000000);//次の部屋に行くための必要な時間
	rep(i, 0, n - 1) cin >> need_time.at(i); 
	vector<pair<int, int>>  cure(1000000, pair(0, 0));//回復ポイントをpairで入れた

	if(m != 0){
		for(int i = 0; i <= m ; i++){
			cin >> cure.at(i).first >> cure.at(i).second;//回復ポイントを配列にぶちこんだだ
		}
	}
	
	int j = 0;
	for(int i = 1; i <= n; i++){

		if(cure.at(j).first == i){
			t += cure.at(j).second;
			j++;
		}//回復ポイントに付いたら回復

		if(need_time.at(i - 1) > t){
			cout << "No" << endl;
			return 0;
		}//必要な時間が足りないとNO

		t -= need_time.at(i - 1);//時間を消費

		if(i == n){
			cout << "Yes" << endl;
			return 0;
		}//付いたらクリア
	}
}

	/*
	vector<int> room(n + 1);
	for(int i = 1; i <= n; i++){
		room.at(i) = i;
	}
	vector<int> need_time(n);
	rep(i, 1, n) cin >> need_time.at(i);

	vector<pair<int, int>>  cure(100000, pair(0, 0));


	for(int i = 0; i < m ; i++){
		cin >> cure.at(i).first >> cure.at(i).second;
	}

	//cout << cure.at(0).first << cure.at(0).second << endl;



	for(int i = 1; i < n;){
		if(need_time.at(i) <= t){
			//cout << i << ':' << t << endl;
			t -= need_time.at(i);
			i++;
			//cout << i << ':' << t << endl;
			if(i == n){
				cout << "Yes" << endl;
				return 0;
			}
			for(int j = 0; j < m; j++){
				if(cure.at(j).first == i){
					t += cure.at(j).second;
				}				
			}
			//cout << i << ':' << t << endl;
			continue ;
		}
		cout << "No" << endl;
		return 0;
	}
	*/
