#include<iostream>
int n,m,a[8],v[8];
void f(int c){
  if(c==m){
    for(int i=0;i<m;)printf("%d ",a[i++]);
    puts("");
    return;
  }
  for(int i=0;i<n;i++){
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
