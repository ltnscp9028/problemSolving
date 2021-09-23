#include<bits/stdc++.h>
using namespace std;
int n,m,b[505][505],ans,dy[4]={0,0,1,-1},dx[4]={1,-1,0,0},chk[505][505];

int go(int y,int x,int lev) {
	int ret=0,st[5],sidx=0,tmp=0;
	if (lev==3)return b[y][x];	
	chk[y][x]=1;
	for (int i=0;i<4;i++){
		int ny=y+dy[i],nx=x+dx[i];
		if (ny<0||n<=ny||nx<0||m<=nx||chk[ny][nx]) continue;
		ret = max(ret, go(ny,nx,lev+1));
		st[sidx++] = b[ny][nx];
	}
	if (lev==1&&sidx>=2){
		sort(st,st+sidx);
		tmp=st[sidx-1]+st[sidx-2];
		ret=max(ret,tmp);
	}
	chk[y][x]=0;
	return ret+=ret?b[y][x]:0;
}

main() {
	cin>>n>>m;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)cin>>b[i][j];
	for (int i=0;i<n;i++)
		for (int j=0;j<m;j++) 
			ans = max(ans,go(i,j,0));
	printf("%d ",ans);
}
