#include<bits/stdc++.h>
using namespace std;
int a[1001],n,i,j,dp[1001];
main(){
	for(cin>>n;++i<=n;dp[i]=1e9)cin>>a[i];
	for(i=0,dp[0];++i<=n;)
		for(j=0;++j<=i;)dp[i]=min(dp[i],dp[i-j]+a[j]);
	cout<<dp[n];
}
