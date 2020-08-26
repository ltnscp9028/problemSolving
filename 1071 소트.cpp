#include<bits/stdc++.h>
using namespace std;
int n,i;
int main(){
	cin>>n;
	vector<int>v(n);
	for(;i<n;i++)scanf("%d",&v[i]);
	sort(v.begin(),v.end());
	for(i=n-1;i>=0;i--){
		if(v[i-1]+1==v[i])v[i]^=v[i-1]^=v[i]^=v[i-1];
	}
	for(i=0;i<n;i++)cout<<v[i]<<' ';
}
