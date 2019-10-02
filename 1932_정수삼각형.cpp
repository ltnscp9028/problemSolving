#include <bits/stdc++.h>
using namespace std;
int a[501][501],dp[501][501],r,j,i,t;main(){
	
	for(cin>>t;++i<=t;)
		for(j=0;++j<=i;cin>>a[i][j]);
	
	dp[1][1] = a[1][1];
	
	for(i=0;++i<=t;)
		for(j=0;++j<=i;){
			dp[i+1][j] = max(dp[i+1][j], dp[i][j] + a[i+1][j]);
            dp[i+1][j+1] = max(dp[i+1][j+1], dp[i][j] + a[i+1][j+1]);
		}
	
	for(i=0;++i<=t;)r=max(r,dp[t][i]);
	
	cout<<r;
}


