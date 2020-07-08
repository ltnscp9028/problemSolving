#include<bits/stdc++.h>
char arr[101][101];
int dx[] = {1,-1,0,0,1,1,-1,-1};
int dy[] = {0,0,1,-1,1,-1,1,-1};
int i,j,k,n,res,chk,nx,ny;
int main(){
	scanf("%d",&n);
	if(n<3){
		printf("0");
		return 0;
	}
	
	for(i=0;i<n;i++)scanf("%s",arr[i]);
	res = (n-2)*(n-2);
	for(i=1;i<n-1;i++)
		for(j=1;j<n-1;j++){
			for(chk=k=0;k<8;k++)
				arr[i+dx[k]][j+dy[k]]=='0'?chk++:0;
			if(chk)res--;
			else
				for(k=0;k<8;k++){
					nx = i + dx[k];
					ny = j + dy[k];
					if(arr[nx][ny]>'0'&&arr[nx][ny]<='9')arr[nx][ny]--;
				}
		}
	printf("%d",res);	
}
