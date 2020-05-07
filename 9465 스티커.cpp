#include<bits/stdc++.h>
using namespace std;

int t,g,dp[3][100001],score[3][100001];main(){
	cin>>t;
	for(;t--;){
		cin>>g;
		for(int i=0;i<2;i++){
			for(int j=1;j<=g;j++)scanf("%d",&score[i][j]);
		}
		dp[0][0]=dp[1][0]=0;
		dp[0][1]=score[0][1];
		dp[1][1]=score[1][1];
		for(int i=2;i<=g;i++){
				dp[0][i]=max(dp[1][i-1],dp[1][i-2])+score[0][i];
				dp[1][i]=max(dp[0][i-1],dp[0][i-2])+score[1][i];
			}
		printf("%d\n",max(dp[0][g],dp[1][g]));
	}

}

