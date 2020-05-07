#include <bits/stdc++.h>
using namespace std;
int a[10002],d[10002],t,i=1;main(){
	for(cin>>t;~scanf("%d",a+i++););
	d[1]=a[1];
	d[2]=a[1]+a[2];
	for(i=2;++i<=t;)d[i]=max(d[i-1],max(d[i-2]+a[i],d[i-3]+a[i-1]+a[i]));
	cout<<d[t];
}
 
 
 /*
#import<iostream>
using namespace std;
int a,b,c,d,e,f;
main(){
    for(cin>>a;~scanf("%d",&a);e=d,d=c,c=b,f=a)
        b=max(max(c,d+a),e+a+f);    
    cout<<b;
}*/
