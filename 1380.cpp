#include <bits/stdc++.h>
using namespace std;

int user[100][100],visit[100][100],r[100],no,gs;main(){
	cin>>no>>gs;
	for(int x,y;~scanf("%d %d",&x,&y);){
		user[x][y]=1;
		user[y][x]=1;
	}
	
	for(int i=1;i<=no;i++){
		memset(r,0,sizeof(r));	
		for(int j=1;j<gs;j++){
			if(!visit[i][j])
		}	
	}
/*for(int i=1;i<=no;i++){
		for(int j=1;j<=gs;j++)cout<<user[i][j]<<" ";
		puts("");
	}*/
}
