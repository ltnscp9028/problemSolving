#include <bits/stdc++.h>
using namespace std;
int mod = 1000000000;
int dp[101][10],i,j,n,s;main(){
	cin>>n;
	for(i=0;i<10;i++)dp[1][i]=1;
	
	for(i=2;i<=n;i++)
		for(j=0;j<10;j++){
			dp[i][j] = j==0? dp[i-1][1]%mod : j==9? dp[i-1][8]%mod : (dp[i-1][j-1] + dp[i-1][j+1])%mod;
		cout<<dp[i][j]<<endl;
	}
	
	for(i=1;i<10;i++)s=(s+dp[n][i])%mod;
	cout<<s<<endl;
}

