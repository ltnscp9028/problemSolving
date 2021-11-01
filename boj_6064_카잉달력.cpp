#include<bits/stdc++.h>
using namespace std;
int t,m,n,x,y;
main(){
    for(cin>>t;~scanf("%d %d %d %d",&m,&n,&x,&y);printf("%d",x?t+1:-1))
        for(t=x-1;t%n-y+1&&x;x=m*n/t)t+=m;
}