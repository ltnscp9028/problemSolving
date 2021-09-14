#include<bits/stdc++.h>
int a[9],j,i,s=-100,p,q;main(){
  for(;~scanf("%d",&a[i]);s+=a[i++]);
  for(std::sort(a,a+9);j<9;j++)
    for(i=-1;++i<9;a[j]+a[i]^s?0:(p=j,q=i));
  for(i=-1;++i<9;i^p&&i^q?printf("%d ",a[i]):0);
}