#include<bits/stdc++.h>
using namespace std;
int dp[501][501],mp[501][501],i,j,n,ans,dx[4]={-1,1,0,0},dy[4]={0,0,-1,1};

int dfs(int y, int x){
	if(dp[y][x])return dp[y][x];
	dp[y][x] = 1;
	for(int q=0;q<4;q++){
		int nx = x +dx[q];
		int ny = y +dy[q];
		
		if(ny<0 || ny>=n || nx<0 || ny>=n || mp[y][x]>=mp[ny][nx])continue;
		
		dp[y][x] = max(dp[y][x],dfs(ny,nx)+1);
	}
	return dp[y][x];
}

main(){
	for(cin>>n;i<n;i++)
		for(j=0;j<n;j++)scanf("%d",&mp[i][j]);
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			ans = max(ans,dfs(i,j));
		}
	}
	cout<<ans;
}
