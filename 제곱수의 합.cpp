#include <bits/stdc++.h>
using namespace std;
int n,i=1,j,dp[100001];main(){
	for(cin>>n;i<=n;i++){
		dp[i] = i;
		for(j=1;j*j<=i;j++)
			dp[i] = min(dp[i],dp[i-j*j]+1);
	}
	cout<<dp[n];
}
