#include<bits/stdc++.h>
using namespace std;
 

int dp[1003][1003],q[1003][1003],ans,n,m,i,j;main(){
	cin>>n>>m;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)scanf("%1d",&q[i][j]);

	
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(q[i-1][j-1]){
				dp[i][j] = min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;
				ans = max(ans,dp[i][j]);
			}		
		}
	}
	
	
	cout<<ans*ans;
}
