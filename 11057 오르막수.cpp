#include<bits/stdc++.h>
using namespace std;

int dp[1001][10],i,j,k,s,tc,mod=10007;main(){
	cin>>tc;
	for(i=0;i<10;i++)dp[1][i]=1;
	
	for(i=2;i<=tc;i++){
		for(j=0;j<10;j++){
			for(k=0;k<=j;k++)dp[i][j] = (dp[i-1][k]+dp[i][j])%mod;
		}
	}
	for(i=0;i<10;i++)s = (s+dp[tc][i])%mod;
	cout<<s;
	
}
