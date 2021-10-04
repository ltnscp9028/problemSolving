#include<bits/stdc++.h>
using namespace std;
int n,m,a[8],v[8],r[8];
void f(int k,int c){
    if(c==m){
        for(int i=0;i<m;)printf("%d ",a[i++]);
        puts("");
        return;
    }
    for(int i=k;i<n;i++){
        v[i]=1;
        a[c]=r[i];
        f(i,c+1);
        v[i]=0;	
	}
}
main(){
    std::cin>>n>>m;
    for(int i=0;i<n;i++)cin>>r[i];
    sort(r,r+n);
    f(0,0);
}
