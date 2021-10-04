#include<bits/stdc++.h>
using namespace std;
int n,i,r,a[8],b[8],v[8];

void dfs(int p){
	if(p==n){
		int i=0,t=0;
		for(;++i<n;)t+=abs(b[i-1]-b[i]);
		r=max(t,r);
	}
	for(int i=0;i<n;i++)
		if(!v[i]){
			v[i]=1;
			b[p]=a[i];
			dfs(p+1);
			v[i]=0;
		}
	return;
}

main(){
	for(cin>>n;~scanf("%d",a+i++););
	dfs(0);
	cout<<r;
}
