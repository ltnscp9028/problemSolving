#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
vector<pair<int, int>>p[102];
vector<pair<int, int>>res;
int i, j,n, team,num,score;
int main() {
	cin >> n;
	if (n < 3 || n>100)return puts("입력오류");
	for (i = 0; i < n; i++) {
		cin >> team>>num>>score;
		if (num < 1 || num>9 || score < 0 || score>100)return puts("입력오류");
		p[team].push_back({ score , num });
	}
	for (i = 0; i < 101; i++) {
		if (p[i].size()>0) {
			sort(p[i].begin(), p[i].end(),greater<pair<int,int>>());
			res.push_back({ p[i][0].first,i });
		}
	}
	sort(res.begin(), res.end(), greater<pair<int, int>>());
	for (i = 0; i < 3; i++) 
		cout << (i == 0 ? "금메달 " : i == 1 ? "은메달 " : "동메달 ") << res[i].second << ' ' << p[res[i].second][0].second <<' '<< res[i].first << '\n';
}