#include<bits/stdc++.h>
using namespace std;
int n,i,v[99999];main(){
	for(cin>>n;i<n;)cin>>v[i++];
	for(i=prev_permutation(v,v+n),i?0:puts("-1");i&&i<=n;i++)cout<<v[i-1]<<' ';
}
