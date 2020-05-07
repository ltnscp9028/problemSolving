#include<queue>
#include<cstdio>
#include<iostream>
using namespace std;
int n,m,k,stx,sty,d;

int arr[400][400];
int answer[400][400];
int visit[400][400];
int dx[4]={1,0,-1,0},dy[4]={0,-1,0,1};


queue<pair<int,int> >localq;
queue<int>timeq;


void bfs(){
   
   while(!localq.empty()){
      int nowx = localq.front().second;
      int nowy = localq.front().first;
      int nowk = timeq.front();
      
       localq.pop();
      timeq.pop();
       if(visit[nowy][nowx]==5){
          continue;
      }
       
       if(visit[nowy][nowx]==1){
         answer[nowy][nowx]= nowk;
          arr[nowy][nowx]= (arr[nowy][nowx]+nowk)%4;
      }
      
       else{
           arr[nowy][nowx] = (arr[nowy][nowx]+1)%4;
      }
      
          
       if(visit[nowy][nowx]<5){  
           localq.push({nowy,nowx});
           timeq.push(nowk+1);
         visit[nowy][nowx]++;
       }
       
       else{
          continue;
      }
      
       int nextx = nowx + dx[arr[nowy][nowx]];
       int nexty = nowy + dy[arr[nowy][nowx]];
        
   
       if(nextx<0 || nexty<0 || nexty>=n || nextx>=m);
         
       else{
           if(!visit[nexty][nextx]){
              visit[nexty][nextx]++;
              localq.push({nexty, nextx});
              timeq.push(nowk+1);
           } 
       }  
   }
}

main(){
	
   cin>>n>>m>>k>>sty>>stx;
   for(int i=0;i<n;i++)
      for(int j=0;j<m;j++)
         cin>>arr[i][j];
         
   localq.push({sty,stx});
   visit[sty][stx]=1;
   timeq.push(k);
   bfs();
   for(int i=0;i<n;puts(""),i++)
      for(int j=0;j<m;j++)
         cout<<answer[i][j]<<' ';
   }
