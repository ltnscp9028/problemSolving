#include<bits/stdc++.h>
using namespace std;
int i,j,x,y,dx,dy,n,m,k;
int a[1002][1002],b[1002][1002],c[1002][1002],aa[1002][1002],bb[1002][1002],cc[1002][1002]; 
char ch;
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin>>n>>m>>k;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			cin>>ch;
			ch=='J'?a[i][j]=++aa[i][j] : ch=='O' ? b[i][j]=++bb[i][j] : c[i][j]=++cc[i][j];
		}
	}
	
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++){
			aa[i][j] += aa[i][j-1];
			bb[i][j] += bb[i][j-1];
			cc[i][j] += cc[i][j-1];
		}

	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++){
			aa[i][j] += aa[i-1][j];
			bb[i][j] += bb[i-1][j];
			cc[i][j] += cc[i-1][j];
		}
	
	for(;~scanf("%d %d %d %d\b",&x,&y,&dx,&dy);)
		printf("%d %d %d\n",
			aa[dx][dy]-aa[x-1][dy]-aa[dx][y-1]+aa[x-1][y-1],
			bb[dx][dy]-bb[x-1][dy]-bb[dx][y-1]+bb[x-1][y-1],
			cc[dx][dy]-cc[x-1][dy]-cc[dx][y-1]+cc[x-1][y-1]);

}
