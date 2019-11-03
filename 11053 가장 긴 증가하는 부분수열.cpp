#include <bits/stdc++.h>
using namespace std; 
int a[1001],dp[1001],n,i,r,j;
main(){
	for(cin>>n;i<n;cin>>a[++i]);
	for(i=1;i<=n;i++){
		dp[i]=1;
		for(j=0;j<i;j++){
			if(a[i]>a[j])
				dp[i]= max(dp[i],dp[j]+1);
		}
		r=max(r,dp[i]);
	}
	cout<<r;
}
