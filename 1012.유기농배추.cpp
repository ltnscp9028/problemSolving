#include <bits/stdc++.h>
using namespace std;
int a,x,y,g,xb,yb,ct,
dx[4]={0,0,1,-1},dy[4]={1,-1,0,0},
bmap[51][51],visit[51][51];
	void dfs(int yy,int xx){
		for(int i=0;i<4;i++){
			int ny=yy+dy[i];
			int nx=xx+dx[i];
			if(ny<0 || nx<0 || ny>=y || nx>=x) continue;
			
			if(bmap[ny][nx] && !visit[ny][nx]){
				visit[ny][nx]++;
				dfs(ny,nx);
			}
		}
	}
	main(){
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>x>>y>>g;
		memset(bmap,0,sizeof(bmap));
		memset(visit,0,sizeof(visit));
		ct=0;
		for(int j=0;j<g;j++){
			cin>>xb>>yb;
			bmap[yb][xb]++;	
		}
		for(int i=0;i<y;i++){
			for(int j=0;j<x;j++){
				if(bmap[i][j]&&!visit[i][j]){
					ct++;
					visit[i][j]++;
					dfs(i,j);
				}	
			}
		} 
		cout<<ct<<endl;
	}
}

