#include<bits/stdc++.h>
using namespace std;
int arr[55][55],n,m,i,j,t;
int main(){
	for(cin>>n>>m;i++<n;)
		for(j=0;++j<=m;)scanf("%1d",&arr[i][j]);
		
	for(i=1;i<=n;i++,puts(""))
		for(j=1;j<=m;j++)cout<<arr[i][j]<<' ';
}
