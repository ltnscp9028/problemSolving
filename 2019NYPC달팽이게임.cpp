#include<bits/stdc++.h>
using namespace std;
ary[1001][1001];main()
{
int ary[1001][1001];
int n, z, i, j, x=0, y=-1, turn=1;
int num=1;
	scanf("%d",&n);
	z=n;
	while(z!=0){
		for(i=0; i<z; i++){
			y+=turn;
			ary[x][y]=num;
			num++;
		}
		z--;
		for(i=0; i<z; i++)
		{
			x+=turn;
			ary[x][y]=num;
			num++;
		}
		turn*=-1;
	}
	for(i=0; i<n; i++){
		for(j=0; j<n;j++){
			printf("%5d",ary[i][j]);
		}
	printf("\n");
	}
return 0;

}


