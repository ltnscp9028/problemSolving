#include<bits/stdc++.h>
using namespace std;
int candyMax[1001][1001];int dp[1001][1001];
main(int i){
	int a,b;
	int j;
	scanf("%d %d",&a,&b);
	for(;i<=a;i++)
		for(j=1;j<=b;j++)scanf("%d",&candyMax[i][j]);
		
	for(i=1;i<=a;i++)
		for(j=1;j<=b;j++){
			int r=0;
			r=max(dp[i-1][j-1],max(dp[i-1][j],dp[i][j-1]));
			dp[i][j] = r + candyMax[i][j];
			printf("r=%d dp[%d][%d]=%d dp[%d][%d]=%d dp[%d][%d]=%d candyMax[%d][%d]=%d\n",
			r,i-1,j-1,dp[i-1][j-1],i-1,j,dp[i-1][j],i,j-1,dp[i][j-1],i,j,candyMax[i][j]);
		}
		
	printf("%d",dp[a][b]);
}

/*#include <stdio.h>
int max(int a, int b) { return a > b ? a : b; }
int i, j, n, m, k, dp[1001];
int main() {
	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			scanf("%d", &k);
			dp[j] = max(dp[j - 1], dp[j]) + k;
		}
	}
	printf("%d", dp[m]);
	return 0;
}*/
