#include<bits/stdc++.h>
using namespace std;
int n,m,a[8],v[8],r[8];
void f(int c){
    if(c==m){
        for(int i=0;i<m;)printf("%d ",a[i++]);
        puts("");
    }
    for(int i=0;i<n;i++)
        if(!v[i]&&a[c-1]<r[i]){
            v[i]=1;
            a[c]=r[i];
            f(c+1);
            v[i]=0;
        }
}
main(){
    std::cin>>n>>m;
    for(int i=0;i<n;i++)cin>>r[i];
    sort(r,r+n);
    f(0);
}