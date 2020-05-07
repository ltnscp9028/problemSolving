#include <bits/stdc++.h>
using namespace std;
int a,lt[13],v[13];
void dfs(int p,int q){
	if(q==6){
		for(int i=0;i<6;i++)
			printf("%d ",v[i]); 
		puts("");
	}
	
	for(int i=p;i<a;i++){
		v[q]=lt[i];
		dfs(i+1,q+1);
	}
	
}

main(){
	for(;cin>>a && a;){
		for(int i=0;i<a;i++){
			cin>>lt[i];
		}

		dfs(0,0);
		puts("");
	}
}
