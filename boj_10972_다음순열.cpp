#include<bits/stdc++.h>
using namespace std;
n,i,v[99999];main(){
	for(cin>>n;i<n;)cin>>v[i++];
	for(i=next_permutation(v,v+n),i?0:puts("-1");i&&i<=n;i++)cout<<v[i-1]<<' ';
}
