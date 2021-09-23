#include<iostream>
int n,m,a[8],v[8];
void f(int k,int c){
  if(c==m){
    for(int i=0;i<m;)printf("%d ",a[i++]);
    puts("");
    return;
  }
  for(int i=k;i<n;i++){
	v[i]=1;
    a[c]=i+1;
    f(i,c+1);
    v[i]=0;	
  }
}
main(){
  std::cin>>n>>m;
  f(0,0);
}
