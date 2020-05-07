#include<bits/stdc++.h>
using namespace std;
string h;
int n,k,i,re,m;
main(){
	cin>>n>>m;
	for(i=1;i<=m;i++){
		h = to_string(i*n);
		reverse(h.begin(),h.end());
		k = atoi(h.c_str());
		re = max(k,re);
	}
	cout<<re;
}
