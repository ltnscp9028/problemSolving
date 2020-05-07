#include<bits/stdc++.h>
using namespace std;
int ary[1001][1001];main()
{
int n, z, i, j, x=0, y=-1, turn=1,cheat;
int num=1;
	scanf("%d %d",&n,&cheat);
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
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(ary[i][j]==cheat){
				printf("%d %d",j+1,i+1);			
			}
		}
	}	
			
return 0;

}


