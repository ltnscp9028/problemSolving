#include <bits/stdc++.h>
using namespace std;
int mm[101][101],n,dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};
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
			if(nx<0 || n<=nx || ny<0 || n<=ny)
			continue;
			
			else{
				que.push(make_pair(ny,nx));
				mm[ny][nx]=mm[current.first][current.second]+1;
			}
		/*	if(0<=nx && 0<=ny && nx<x && ny<y && mm[ny][nx]==1){
				que.push(make_pair(ny,nx));
				mm[ny][nx]=mm[current.first][current.second]+1;
			}*/
		}
	}
}


main(){
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&mm[i][j]);
			
	bfs();
	cout<<mm[n-1][n-1];

}
