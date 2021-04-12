#include<iostream>
#include<algorithm>
std::pair<int,int>p[100002];
int n,e,i,j,fp,cr,cnt=1;
main()
{
   std::cin>>n>>e;
   for(i=0;i<n;i++)std::cin>>p[i].first>>p[i].second;   
   
   std::sort(p,p+n);
   fp=p[0].second-e;
   cr=p[0].second+e;
   for(i=1;i<n;i++){
      
      if(fp>p[i].second+e){
         cnt++;
         cr=p[i].second+e;
         fp=p[i].second-e;
      }
      
	  else if(cr<p[i].second-e){
         
         cnt++;
         cr=p[i].second+e;
         fp=p[i].second-e;
         
      }
      
      else{   
         fp=std::max(p[i].second-e,fp);
         cr=std::min(p[i].second+e,cr);
      }
   }
   printf("%d",cnt);
   
}


