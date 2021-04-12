#include<iostream>
#include<algorithm>
using namespace std;
int n, a[3], res;
pair<int, int>cnt;
int main() {
	cin >> n;
	if (n < 2 || n>1000) {
		puts("입력오류");
		return -1;
	}
	for (; n--; res = max(res, cnt.first == 2 ? cnt.second * 1000 + 5000 : cnt.first == 1 ? cnt.second * 500 + 2000 : cnt.second * 200)) {
		cin >> a[0] >> a[1] >> a[2];
		if (a[0] < 1 || a[0]>6 || a[1] < 1 || a[1]>6 || a[2] < 1 || a[2]>6) {
			puts("입력오류");
			return -1;
		}
		a[0] == a[1] ? a[1] == a[2] ? cnt = { 2,a[0] } : cnt = { 1,a[0] } : a[1] == a[2] ? cnt = { 1,a[1] } : a[0] == a[2] ? cnt = { 1,a[0] } : cnt = { 0, max(max(a[0], a[1]), a[2]) };
	}
	cout << res << '\n';
}