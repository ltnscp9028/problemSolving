#include<bits/stdc++.h>
using namespace std;
int n,i,j,v[1000001];
string s;
int main(){
	for(cin>>n>>s;++i<n;v[i]=s[i]==s[j]?v[i]=++j:0)
		for(;j>0&&s[i]!=s[j];)j=v[j-1];
	printf("%d",n-v[n-1]);
}
