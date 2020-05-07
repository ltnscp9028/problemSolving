#include<bits/stdc++.h>
using namespace std;

int n,k,dp[10001],coin[102],i,j;

main(){
	cin>>n>>k;
	
	//	for(i=1;i<=k;i++)dp[i]=10001;
	
	memset(dp,10001,sizeof(k));
	dp[0] = 0;
	
	for(i=1;i<=n;++i){
		cin>>coin[i];
		
		for(j=coin[i];j<=k;j++){
			dp[j]=min(dp[j],dp[j-coin[i]]+1);
		}
	}
	
	cout<<(dp[k]==10001?-1:dp[k])<<endl;
}
 
