#include<bits/stdc++.h>
using namespace std;
int a[10001],j,k,i,t;main(){
	for(cin>>k;~scanf("%d",&k);a[k]++);
	for(i=0;i<10000;i++)
		for(j=0;j<a[i];j++)cout<<i<<"\n";
}
