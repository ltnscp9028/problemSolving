#include<bits/stdc++.h>
using namespace std; 
int n,i,a[8];
main(){
	for(cin>>n;++i<=n;)a[i-1]=i;
	do{
		for(i=0;i<n;i++)printf("%d ",a[i]);
		puts("");
	}while(next_permutation(a,a+n));
		
}
