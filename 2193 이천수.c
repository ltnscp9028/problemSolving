/*long long dp[91]={1,1};a;b;r=1;main(i){
	for(scanf("%d",&a);++i<a;)dp[i]=dp[i-1]+dp[i-2];
	printf("%lld",dp[a-1]);
}
*/


long f,r;main(a){
   for(r=scanf("%d",&a);--a;f=r-f)
      r+=f;
   printf("%lld",r);
}
