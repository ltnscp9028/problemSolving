#include<bits/stdc++.h>
using namespace std;
int a[50][50],v[50][50],
dx[8]={0,1,1,1,0,-1,-1,-1},
dy[8]={-1,-1,0,1,1,1,0,-1},
w,h,cnt,i,j;

void dfs(int y,int x){
   ++v[y][x];
	for(int i=0;i<8;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx<0 || ny<0 || ny>=h || nx>=w || !a[ny][nx] || v[ny][nx])continue;
		dfs(ny,nx);
	}
}
main(){
    for(;~scanf("%d %d",&w,&h)&&w;cout<<cnt<<'\n'){
        for(i=cnt=0;i<h;i++)
            for(j=0;j<w;v[i][j++]=0)cin>>a[i][j];
        
        for(i=0;i<h;i++)
            for(j=0;j<w;j++)
                if(!v[i][j]&&a[i][j]){
                    cnt++;
                    dfs(i,j);
                }
    }
}