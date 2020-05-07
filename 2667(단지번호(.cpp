#include<bits/stdc++.h>
using namespace std;
int a[25][25],num[1010],visit[25][25],dx[4]={0,0,1,-1},dy[4]={1,-1,0,0},
ct,sq;
void dfs(int y,int x){
	int p=0;
	num[ct]++;
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		
		if(nx<0 || ny<0 || ny>=sq || nx>=sq)continue;
		if(a[ny][nx]&&!visit[ny][nx]){
			visit[ny][nx]++;
			dfs(ny,nx);
		}
	}
}
main(){
	cin>>sq;
	for(int i=0;i<sq;i++)
		for(int j=0;j<sq;j++)scanf("%1d",&a[i][j]);
	
	for(int i=0;i<sq;i++){
		for(int j=0;j<sq;j++){
			if(a[i][j]&&!visit[i][j]){
				visit[i][j]++;
				dfs(i,j);
				ct++;
			}
		}
	}
	cout<<ct<<endl;
	sort(num,num+ct);
	for(int i=0;i<ct;i++)cout<<num[i]<<endl;
	
}


