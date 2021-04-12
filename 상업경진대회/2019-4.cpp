#include<bits/stdc++.h>
using namespace std;
int n,i,dp[35]={0,1,2};
int main(){
	cin>>n;
	system("cls");
	if(n<4||n>30)return puts("입력오류");
	for(i=3;i<=30;i++)dp[i]=dp[i-1]+dp[i-2];
	printf("%d",dp[n]);
}
