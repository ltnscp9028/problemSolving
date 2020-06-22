#include<bits/stdc++.h>
using namespace std;
int d,n,i,t,v[300010]={300010};
int main(){
	for(cin>>d>>n;i++<d;v[i] = min(v[i-1],t))cin>>t;
	for(;~scanf("%d",&t);d--)
		for(;d>0&&v[d]<t;)d--;
	cout<<(d<0?0:d+1);
}

