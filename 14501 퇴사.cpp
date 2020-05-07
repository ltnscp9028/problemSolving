#include<bits/stdc++.h>
using namespace std;

int dp[16],tc,i,j,t[16],p[16],m;


main(){
	cin>>tc;
	for(i=1;i<=tc;i++)
		cin>>t[i]>>p[i];
//	dp[1]=p[1];
	
	for(i=1;i<=tc+1;i++){
		dp[i]=max( dp[i] , m );
		dp[t[i]+i] = max ( dp[t[i]+i] , p[i]+dp[i] );
		m=max(m,dp[i]);
	}
	cout<<m;
}
