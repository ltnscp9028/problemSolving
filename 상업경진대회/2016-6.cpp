#include<iostream>
#include<algorithm>
using namespace std;
int i, j,mx,my, m, tmp;
int main() {
	int n;
	i = j = 1;
	for (cin >> n; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			cin >> tmp;
			if (tmp < 0 || tmp>100) {
				puts("출력오류");
				return -1;
			}
			if (tmp > m) {
				m = tmp;
				mx = j;
				my = i;
			}
		}
	}
	printf("%d행 %d열 %d\n", my, mx, m);
}