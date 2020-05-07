#include<bits/stdc++.h>
using namespace std;
int jj[100][100],visit[100],a;
	void dfs(int q){
		for(int i=0;i<a;i++){
			if(jj[q][i]&&!visit[i]){
				visit[i]++;
				dfs(i);
			}
		}
	}



main(){
	cin>>a;
	for(int i=0;i<a;i++)
		for(int j=0;j<a;j++)cin>>jj[i][j];
	
	for(int i=0;i<a;i++){
		memset(visit,0,sizeof(visit));
		dfs(i);
		
		for(int j=0;j<a;j++){
			if(visit[j])
				jj[i][j]=1;	
		}
	}
	for(int i=0;i<a;i++){	
			for(int j=0;j<a;j++){
				cout<<jj[i][j]<<" ";
			}
			puts("");
		}	
}

