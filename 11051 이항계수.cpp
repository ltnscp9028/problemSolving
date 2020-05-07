#include<bits/stdc++.h>
using namespace std;
int i,j,n,k,dp[1001][1001];
main(){
	cin>>n>>k;
	dp[1][0] = dp[1][1] = 1;
	for(i=2;i<=n;i++){
		for(j=0;j<=i;j++){
			dp[i][j] = (i==j || j==0) ? 1 : dp[i-1][j-1] + dp[i-1][j];
			dp[i][j]%=10007;	
		}
	}
	cout<<dp[n][k];
} 
