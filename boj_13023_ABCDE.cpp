#include<bits/stdc++.h>
using namespace std;
vector<int>a[2001];
int n,m,p,q,i,r,v[2001];
void dfs(int d,int c){
	v[c]=1;
	if(d==4){
		r=1;
		return;
	}
	for(int h:a[c]){
		if(r)return;
		if(!v[h])
		dfs(d+1,h);
	}
	v[c]=0;
	return;
}

main(){
	cin>>n>>m;
	for(;m--;a[p].push_back(q),a[q].push_back(p))cin>>p>>q;
	for(i=0;i<n;dfs(0,i++))memset(v,0,sizeof(v));
	cout<<r;
}
