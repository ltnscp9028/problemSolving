#include<queue>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

vector<long long int>X;
vector<int>pX;
queue<long long int>Y;
queue<int>pY;

int N,M,i;
int a,b,ims;
long long int imsi;
int st_X=1;
int en_X=1;
int ny;
long long int sum,yy;
main()
{
   scanf("%d",&N);
   X.push_back(0);
   pX.push_back(0);
   for(i=1;i<=N;i++)
   {
      
      scanf("%d%lld",&ims,&imsi);
      
      pX.push_back(ims);
      X.push_back(imsi);
      
      X[i]+=X[i-1];
   }
      pX.push_back(2147483647);
      X.push_back(9223372036854775807);
   
   scanf("%d",&M);
    
   for(i=0;i<M;i++)
   {
      scanf("%d %lld",&ims,&imsi);
      pY.push(ims);
      Y.push(imsi);
   }
   scanf("%d%d",&a,&b);
   
   while(!Y.empty()){
   
      ny=pY.front();
      yy=Y.front();

      while(st_X<=N  &&   pX[st_X]<ny+a    )
      {
         
         st_X++;
      }
   
      while(en_X<=N  &&    pX[en_X]<=ny+b   )
      {
         
         en_X++;  
         
      }
      if(pX[st_X-1]>ny+b||pX[en_X-1]<ny+a)
      {
         Y.pop();
         pY.pop();
         continue;
      }
       sum+= yy *( (st_X==en_X)?X[en_X-1]  :  (X[en_X-1]-X[st_X-1]));
      Y.pop();
      pY.pop();
   
   }
   printf("%lld",sum);
   
}	
