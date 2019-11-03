#include <bits/stdc++.h>
using namespace std;

int c[101][101],d[101],x,y,a,b,pp,zz;
queue<int>q;

void bfs(){
	while(!q.empty()){
		int n = q.front();
		q.pop();
		for(int i=1;i<=a;i++){
			if(c[n][i]==0 || d[i]!=0)continue;
			d[i]=d[n]+1;
			q.push(i);
		}
	}
}

main(){
	cin>> a >> pp >> zz >> b;
	for(int i=0;i<b;i++){
		cin>>x>>y;
		c[x][y]=c[y][x]=1;
	}
	q.push(pp);
	bfs();
	cout<< (d[zz]==0 ? -1 : d[zz]) << endl;

}
