#include<bits/stdc++.h>
using namespace std;
int n,p,cnt,c,l,m[99][99],vi[99];
void dfs(int v){
	for(int i=vi[v]=1;i<=p;i++)
		if(vi[i]==0 && m[v][i]==1)dfs(i);
}
int main(){
	for(cin>>p>>n;n--;m[c][l]=m[l][c]=1)
		cin>>c>>l;
	dfs(1);
	for(int i=1;i++<=p;)vi[i]?cnt++:0;
	cout<<cnt;
}
