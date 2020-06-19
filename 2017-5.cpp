#include<iostream>
#include <vector>
using namespace std;
int n, i, j, k,
dx[8] = { -1, 0, 1, -1, 1, -1, 0, 1 },
dy[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };

char arr[11][11];
int main() {
	cin >> n;
	if (n < 3 || n>9)return puts("입력오류");
	for (i=1; i <= n; i++)
		for (j = 1; j <= n; j++)cin >> arr[i][j];
	for (i = 1; i <= n; puts(""),i++) {
		for (j = 1; j <= n; j++) {
			if (arr[i][j] == '*')cout << '*';
			else {
				int cnt = 0;
				for (k = 0; k < 8; k++)if (arr[i + dy[k]][j + dx[k]] == '*')cnt++;
				cout << cnt;
			}
		}
	}
}
