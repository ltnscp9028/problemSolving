#include<bits/stdc++.h>
using namespace std;
int arr[100001],dp[100001],i=1,k,m;
main(){
	for(scanf("%d",&k);i<=k;i++)scanf("%d",&arr[i]);
	
	for(i=1;i<=k;i++){
		if(dp[i-1]+arr[i]>arr[i])
			dp[i] = dp[i-1] + arr[i];
		else
			dp[i]=arr[i];
	}
	
	for(i=2;i<=k;i++){
		if(m<dp[i])m=dp[i];
	}
	printf("%d",m);
}
