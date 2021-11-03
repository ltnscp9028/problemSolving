#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n,i,j,m[100][100];
ll dp[100][100];

ll dfs(int y, int x) {
    if (y==n-1&&x==n-1)return 1;
    else if(!~dp[y][x]){
        dp[y][x] = 0;
        int ry=y;
        int rx=x+m[y][x];

        if(ry>=0&&ry<n&&rx>=0&&rx<n)dp[y][x]+=dfs(ry, rx);

        int dy=y+m[y][x];
        int dx=x;
        if(dy>=0&&dy<n&&dx>=0&&dx<n)dp[y][x]+=dfs(dy, dx);
    }
    return dp[y][x];
}

main(){
	for(cin>>n;i<n;i++)
		for(j=0;j<n;dp[i][j++]=-1)cin>>m[i][j];
	cout<<dfs(0,0);
}
