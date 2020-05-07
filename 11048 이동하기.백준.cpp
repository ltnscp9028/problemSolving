#include <bits/stdc++.h>
using namespace std;
int candy[1001],int dp[1001];
int j,a,b;
main(int i){
	for(scanf("%d %d",&a,&b);i<=a;i++)
		for(j=1;j<=b;j++)scanf("%d",&dp[i][j]);
		
	for(i=1;i<=a;i++)
		for(j=1;j<=b;j++{
			int r=0;
			r = max(dp[i-1][j-1],max(dp[i-1][j],dp[i][j-1]));
			dp[i][j] = r+candy[i][j];
		}
	
	printf("%d",dp[a][b]);
}