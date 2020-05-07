#include <bits/stdc++.h>
using namespace std;
int a[100][100],visit[100][100],
dx[4]={1,-1,0,0},dy[4]={0,0,1,-1},cnt,
sc,maxh,minh=100;
void dfs(int yy,int xx,int h){
	for(int i=0;i<4;i++){
		int nx=xx+dx[i];
		int ny=yy+dy[i];
		if(nx<0 || nx>=sc || ny<0 || ny>=sc)continue;
		if(a[ny][nx]<=h || visit[ny][nx])continue;
		visit[ny][nx]++;
		dfs(ny,nx,h);
	}
}
main(){
	cin>>sc;
	for(int i=0;i<sc;i++)
		for(int j=0;j<sc;j++){
			cin>>a[i][j];
			maxh=max(maxh,a[i][j]);
			minh=min(minh,a[i][j]);
		}
		
	int ans=1;
	for(int h=minh;h<maxh;h++){
		memset(visit,0,sizeof(visit));
		cnt=0;
		for(int i=0;i<sc;i++){
			for(int j=0;j<sc;j++)
				if(a[i][j]>h&& !visit[i][j]){
					visit[i][j]++;
					cnt++;
					dfs(i,j,h);
				}
			}	
		ans=max(cnt,ans);
	}
	cout<<ans<<endl;		
}
