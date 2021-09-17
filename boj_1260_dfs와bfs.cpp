#include<bits/stdc++.h>
using namespace std;
int n,m,v,i,s,e,arr[1001][1001],c[1001];
queue<int>q;

void dfs(int cur){
    cout<<cur<<' ';
    for(int i=c[cur]=1;i<=n;i++)
        if(!c[i] && arr[cur][i])dfs(i);
}

void bfs(int cur){
    q.push(cur);
    c[cur]=1;
    cout<<cur<<' ';
    while(!q.empty()){
        cur = q.front();
        q.pop();
        for(int i=1;i<=n;i++)
            if(!c[i] && arr[cur][i]){
                q.push(i);
                c[i] = 1;
                cout<< i <<' ';
            }
    }
}

main(){
    cin>>n>>m>>v;
    for(;i<m;arr[s][e]=arr[e][s]=1,i++)cin>>s>>e;
    dfs(v);
    for(i=puts("");i<=n;i++)c[i]=0;
    bfs(v);
}
