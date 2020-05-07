/*#include <iostream>
#define MAX 31
 
int main()
{
	int N;
	scanf("%d",&N);
	while(N--)
	{
		int r,n;
		scanf("%d %d",&r,&n);
		int answer=1;
		for(int i=1;i<=r;i++)
		{
			answer=answer*(n-i+1)/i;
		}
		printf("%d\n",answer);
	}
 
	return 0;
}*/

#include<bits/stdc++.h>
using namespace std;

int dp[31][31],n,m,t,i,j;
main(){
	for(i=0;i<31;i++)dp[i][0]=i;	
	
	for(i=1;i<31;i++)
		for(j=1;j<=i;j++)
			dp[i][j] = dp[i-1][j]+dp[i][j-1];
			
	cin>>t;
	for(;t--;){
		cin>>n>>m;
		cout<<dp[m][n]<<endl;
	}
}
