#include<bits/stdc++.h>
using namespace std;
int visit[100][100],a[100][100],
dx[4]={1,-1,0,0},dy[4]={0,0,-1,1};
int x,y,stx,sty,enx,eny,g,ct,v;
vector<int>r;
void dfs(int yy,int xx){
	ct++;
	visit[yy][xx]++;
	for(int i=0;i<4;i++){
		int nx=xx+dx[i];
		int ny=yy+dy[i];
		if(nx<0||nx>=x||ny<0||ny>=y)continue;
		if(a[ny][nx]==0 && !visit[ny][nx])dfs(ny,nx);
	}
}
	
main(){
	cin>>y>>x>>g;
	for(int i=0;i<g;i++){
		cin>>stx>>sty>>enx>>eny;
		for(int i=sty;i<eny;i++){
			for(int j=stx;j<enx;j++)a[i][j]=1;
		}		
	}
	for(int i=0;i<y;i++){
		for(int j=0;j<x;j++){
			if(a[i][j]==0 && !visit[i][j]){
				ct=0;
				visit[i][j]++;
				dfs(i,j);
				r.push_back(ct);
			}
		}
	}
	cout<<r.size()<<endl;
	sort(r.begin(),r.end());
	
	for(int i=0;i<r.size();i++)cout<<r[i]<<" ";
}
