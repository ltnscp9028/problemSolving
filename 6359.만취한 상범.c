/*a;dp[101];rst[101];p;i;j;ct;main(k){
	for(gets(&ct);~scanf("%d",&a);){
		for(i=1;i<=a;i++){
			for(j=1;i*j<=a;j++)dp[i*j] = dp[i*j] ? 0 :1; 	
		}
		for(i=1;i<=a;dp[0]+=dp[i++]);
		printf("%d\n",dp[0]);
		for(i=0;i<=a;dp[i++]=0);
	}
}
*//*
i;main(t){
	for(gets(&t);~scanf("%d",&t);){
	for(;++i*i<=t;);
	i=printf("%d\n",i-1);	
	}
}*/

i;b;main(t){
	scanf("%d",&t);
	while(t--){
		for(i=scanf("%d",&b);++i*i<=b;);
		printf("%d\n",i-1);
	}
}
