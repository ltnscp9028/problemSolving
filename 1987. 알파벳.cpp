#include <bits/stdc++.h>
using namespace std;
char a[20][20];
int ap[26],dy[4]={0,0,1,-1},dx[4]={1,-1,0,0},r,x,y,ans;
void dfs(int yy,int xx,int ct){
	ans=max(ans,ct);
	for(int i=0;i<4;i++){
		int nx=xx+dx[i];
		int ny=yy+dy[i];
		
		if(ny<0 || ny>=y || nx<0 || nx>=x)continue;
		int k=(int)a[ny][nx]-65;
		if(ap[k])continue;
		ap[k]++;
		dfs(ny,nx,ct+1);
		ap[k]--;
	}
	
}
main(){
	cin>>y>>x;
	for(int i=0;i<y;i++)
		for(int j=0;j<x;j++)cin>>a[i][j];
	
	ap[(int)a[0][0]-65]++;
	dfs(0,0,1);
	cout<<ans<<endl;
}

