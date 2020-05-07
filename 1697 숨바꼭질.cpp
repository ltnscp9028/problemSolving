#include <bits/stdc++.h>
using namespace std;

const int m = 1e5;
int visit[m],su,dong,mtime;
queue<int>q;

int bfs(){
	q.push(su);
	while(!q.empty()){
		int size = q.size();
		for(int i=0;i<size;i++){
			su=q.front();
			q.pop();
			if(su==dong)
				return mtime;
			
			if(su>0 && visit[su-1]==0){
				q.push(su-1);
				visit[su-1]=1;
			}
			if(su<m && visit[su+1]==0){
				q.push(su+1);
				visit[su+1]=1;
			}
			if(su*2<=m && visit[su*2]==0){
				q.push(su*2);
				visit[su*2]=1;
			}
		}
		mtime++;
		
	}
}


main(){
	cin>>su>>dong;
	cout<<bfs();
	
}
