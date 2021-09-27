#define MOD 1000000009
long long dp[1000001]={1,1,2,4},i,b;
main(a){
    for(i=3;++i<=1000001;)dp[i]=(dp[i-1]+dp[i-2]+dp[i-3])%MOD;
	for(gets(&b);~scanf("%d",&b);)printf("%lld\n",dp[b]%MOD);
}
