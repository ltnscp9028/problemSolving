#include <bits/stdc++.h>
using namespace std;
int n,m,u,v,check,visit[1001];
vector<int>graph[1001];

void dfs(int node){
	visit[node]=1;
	for(int i=0;i<graph[node].size();i++){
		int next = graph[node][i];
		if(!visit[next])
			dfs(next);
	}
}

main(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	
	for(int i=1;i<=n;i++){
		if(!visit[i]){
			dfs(i);
			check++;
		}
	}
	
	cout<<check<<endl;
}
