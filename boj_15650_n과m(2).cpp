#include<iostream>
int n,m,a[8],v[8];
void f(int c){
  if(c==m){
    for(int i=0;i<m;)printf("%d ",a[i++]);
    puts("");
  }
  for(int i=0;i<n;i++)
    if(!v[i] && a[c-1]<i+1){
      v[i]=1;
      a[c]=i+1;
      f(c+1);
      v[i]=0;
    }
  }
main(){
  std::cin>>n>>m;
  f(0);
}