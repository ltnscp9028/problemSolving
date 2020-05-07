#include <bits/stdc++.h>
using namespace std;
int rmap[1001][4],dp[1001][4],i,j,t;main(){
	for(scanf("%d",&t);++i<=t;)scanf("%d %d %d",rmap[i]+1,rmap[i]+2,rmap[i]+3);	
	for(i=0;++i<=3;)dp[1][i]=rmap[1][i];
	for(i=0;++i<=t;){
			dp[i][1]=min(dp[i-1][2],dp[i-1][3])+rmap[i][1];
			dp[i][2]=min(dp[i-1][1],dp[i-1][3])+rmap[i][2];
			dp[i][3]=min(dp[i-1][1],dp[i-1][2])+rmap[i][3];
		}
	printf("%d",min(dp[t][1],min(dp[t][2],dp[t][3])));
		
}
