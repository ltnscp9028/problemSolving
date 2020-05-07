#include<bits/stdc++.h>
using namespace std;

int hap,g,dp[100001],dz[101];main(){
	cin>>g>>hap;
	for(int i=0;i<g;i++)cin>>dz[i];
	dp[0]=1;
	for(int i=0;i<g;i++){
		for(int j=1;j<=hap;j++){
			if(j-dz[i]>=0)dp[j]+=dp[j-dz[i]];
		}
	}
	printf("%d",dp[hap]);
}


