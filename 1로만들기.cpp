#include <bits/stdc++.h>
using namespace std;

int x,i=2,dp[1000001]={1};main(){
	for(cin>>x;i<=x;i++){
		dp[i] = dp[i-1] + 1;
		if(i%2==0)dp[i] = min(dp[i],dp[i/2]+1);
		if(i%3==0)dp[i] = min(dp[i],dp[i/3]+1);
	}
	cout<<dp[x];	
}
