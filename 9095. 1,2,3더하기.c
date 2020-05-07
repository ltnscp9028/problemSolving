dp[11]={1,1,2,4};i;b;j;main(a){ 
	for(scanf("%d",&b);j<b;j++){
		for(scanf("%d",&a),i=3;i<=a;dp[i]=dp[i-1]+dp[i-2]+dp[i-3])++i;
		printf("%d\n",dp[a]);
		}	
	}
