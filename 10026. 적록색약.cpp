#include<bits/stdc++.h>
using namespace std;
char rgb[101][101],norg[101][101];
int visit[101][101],dx[4]={1,-1,0,0},dy[4]={0,0,1,-1},
sq,r,rr;
void dfs(int y,int x){
	visit[y][x]++;
	for(int i=0;i<4;i++){
		int ny=y+dy[i];
		int nx=x+dx[i];
		if(ny<0 || ny>=sq || nx<0 || nx>=sq)continue;
		if(visit[ny][nx] || rgb[y][x]!=rgb[ny][nx])continue;
		dfs(ny,nx);
	}
}
void rdfs(int y,int x){
	visit[y][x]++;
	for(int i=0;i<4;i++){
		int ny=y+dy[i];
		int nx=x+dx[i];
		if(ny<0 || ny>=sq || nx<0 || nx>=sq)continue;
		if(visit[ny][nx] || norg[y][x]!=norg[ny][nx])continue;
		rdfs(ny,nx);
	}
}
main(){
	cin>>sq;
	for(int i=0;i<sq;i++){
		for(int j=0;j<sq;j++){
			cin>>rgb[i][j];
			norg[i][j] = rgb[i][j]=='G'?'R':rgb[i][j];
		}
	}
	
	for(int i=0;i<sq;i++){
		for(int j=0;j<sq;j++){
			if(!visit[i][j]){
				dfs(i,j);
				r++;
			}
		}
	}
	memset(visit,0,sizeof(visit));
	for(int i=0;i<sq;i++){
		for(int j=0;j<sq;j++){
			if(!visit[i][j]){
				rdfs(i,j);
				rr++;
			}
		}
	}
	cout<<r<<" "<<rr;
}

