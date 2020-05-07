#include<bits/stdc++.h>
using namespace std;

int t[1001][1001],d[1001][1001],dx[4]={1,-1,0,0},dy[4]={0,0,1,-1},x,y,r;
queue<pair<int,int> >q;
pair<int,int>cur;

void bfs(){
	while(!q.empty()){
		int xx=q.front().second;
		int yy=q.front().first;
		q.pop();
		for(int i=0;i<4;i++){
			int nx = xx + dx[i];
			int ny = yy + dy[i];
		if (0 <= nx && nx < x && 0 <= ny && ny < y) { 
			if (t[ny][nx] == 0 && d[ny][nx] == -1) {
				d[ny][nx] = d[yy][xx] + 1; 
				q.push({ny, nx}); 
				}
			}	
		}
	}
}

main(){
	cin>>x>>y;
	//memset(d,-1,sizeof(d));
	for(int i=0;i<y;i++){
		for(int j=0;j<x;j++){
			cin>>t[i][j];
			d[i][j]= -1;
			if(t[i][j]==1){
				q.push({i,j});
				d[i][j]=0;
			}
		}
	}
	bfs();
	
	for(int i=0;i<y;i++){
		for(int j=0;j<x;j++){
			r=max(r,d[i][j]);
			if(t[i][j]==0 && d[i][j]==-1){
				r=-1;
				break;
			}
		}
		if(r==-1)break;
	}
	cout<<r;
}
