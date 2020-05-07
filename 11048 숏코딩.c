max(a,b){return a>b?a:b;}
j,n,m,k,dp[1001];
main(i) {
	for (scanf("%d %d",&n,&m);i<=n;i++)
		for (j=0;(j+=scanf("%d",&k))<=m;){
			//printf("%d\n",j);
			dp[j]=max(dp[j-1],dp[j])+k;
	}
	printf("%d",dp[m]);
}

