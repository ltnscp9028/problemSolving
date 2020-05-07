#include <bits/stdc++.h>
using namespace std;
int n,a[10001],dp[10001],i,j;
main(){
	for(cin>>n;i<n;cin>>a[++i]);
	for(i=0;++i<=n;)
		for(j=0;++j<=i;)dp[i]=max(dp[i],dp[i-j]+a[j]);
	cout<<dp[n];
}
