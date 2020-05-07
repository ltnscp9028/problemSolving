dp[1001]={1,1};n;b=10007;

main(i){
	for(scanf("%d",&n);++i<=n;dp[i]=(dp[i-1]+dp[i-2])%b);
	printf("%d",dp[n]%b);
}



/*f,a;main(r){
	for(scanf("%d",&a);a--;r%=10007){
		r+=f,f=r-f;
		printf("r=%d f=%d\n",r,f);
		}
	printf("%d",r);
}
*/
