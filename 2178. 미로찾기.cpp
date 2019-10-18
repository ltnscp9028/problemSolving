#include <bits/stdc++.h>
using namespace std;
int mm[101][101],x,y,dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};
queue<pair<int,int> >que;

void bfs(){
	que.push(make_pair(0,0));
	pair <int,int> current;
	while(!que.empty()){
		current= que.front();
		que.pop();
		
		for(int i=0;i<4;i++){
			int nx = current.second + dx[i];
			int ny = current.first + dy[i];
			if(nx<0 || x<=nx || ny<0 || y<=ny || mm[ny][nx]!=1)
			continue;
			
				que.push(make_pair(ny,nx));
				mm[ny][nx]=mm[current.first][current.second]+1;
		}
	}
}


main(){
	cin>>y>>x;
	for(int i=0;i<y;i++)
		for(int j=0;j<x;j++)
			scanf("%1d",&mm[i][j]);
			
	bfs();
	cout<<mm[y-1][x-1];

}
