a;i;j;dp[1000][3];cost[1000][3];main(){
	for(scanf("%d",&a);i<a;i++)
	for(j=0;j<3;j++)scanf("%d",&cost[i][j]);
	dp[0][0] = cost[0][0];
	dp[0][1] = cost[0][1];
	dp[0][2] = cost[0][2];
	for(i=1;i<a;i++){
		for(j=0;j<3;j++){
			dp[i][j] += cost[i][j];
		}
	}
	printf("%d",dp[a-1][0]);
}
