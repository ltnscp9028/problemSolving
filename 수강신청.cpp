#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> >v;
map<int,int>m;
map<int,int>::iterator it;
int k,l,aa,i,mi;

main(){
	cin>>k>>l;
	for(;i<l;i++){
		scanf("%d",&aa);
		m[aa]=i;	
	}
	
	for(it=m.begin();it!=m.end();it++)v.push_back({it->second,it->first});
	sort(v.begin(),v.end());
	mi = min(k,(int)v.size());
	
	for(i=0;i<mi;i++){
		printf("%d\n",v[i].second);
	}
	
}

