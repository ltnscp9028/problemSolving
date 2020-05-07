#include<bits/stdc++.h>
using namespace std;
	int a[100001],b[100001],n,r=-9999,i;main(){
	for(cin>>n;i<n;cin>>a[i++]);
	b[0]=a[0];
	for(i=1;i<n;r=max(r,b[i++]))b[i]=max(b[i-1]+a[i],a[i]);
	r=max(b[0],r);
	cout<<r;
}
