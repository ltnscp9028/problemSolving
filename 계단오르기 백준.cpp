#include <bits/stdc++.h>
using namespace std; 
int a[302],dp[302],i=1,t;main(){
	for(cin>>t;~scanf("%d",a+i++););
	dp[1]=a[1];
	dp[2]=a[1]+a[2];
	dp[3]=max(a[1]+a[3],a[2]+a[3]);	
    for (int i = 3; ++i <= t;)
        dp[i] = max(dp[i-2]+a[i], a[i-1]+a[i]+dp[i-3]);
 	
    cout << dp[t];
}

/*#import<iostream>
int D[302][2];main(){
	int n,a,i=1;
	std::cin>>n>>a;
	D[1][0]=a;
	for(;i++<n;){
		std::cin>>a;
		D[i][1]=D[i-1][0]+a;
		D[i][0]=std::max(D[i-2][0],D[i-2][1])+a;
	}
	std::cout<<std::max(D[n][0],D[n][1]);
}*/
