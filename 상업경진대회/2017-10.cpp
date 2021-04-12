#include<iostream>
#include <algorithm>
using namespace std;
int a[302], dp[302], i = 1, t; 
int main() {
	for (cin >> t; i <= t; i++)cin >> a[i];
	dp[1] = a[1];
	dp[2] = a[1] + a[2];
	dp[3] = max(a[1] + a[3], a[2] + a[3]);	
	for (int i = 3; ++i <= t;)
		dp[i] = max(dp[i - 2] + a[i], a[i - 1] + a[i] + dp[i - 3]);

	cout << dp[t];
}