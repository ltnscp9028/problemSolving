#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int n,i,t;
main(){
	for(cin>>n,v.resize(n);i<n;)cin>>v[i++];
	t = next_permutation(v.begin(),v.end());
	for(i=0,t?0:puts("-1");t&&i<n;i++)cout<<v[i]<<' ';
}
