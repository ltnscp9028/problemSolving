#include<bits/stdc++.h>
using namespace std;
vector<string>v;
map<string,int>m;
int i,j,dn,bn;
string dj,bj; 
main(){
	cin>>dn>>bn;
	for(;i<dn;i++){
		cin>>dj;
		m[dj]=i;
	}
	for(i=0;i<bn;i++){
		cin>>bj;
		if(m.count(bj)){
			v.push_back(bj);
			j++;
		}
	}
	sort(v.begin(),v.end());
	cout<<j<<"\n";
	for(i=0;i<j;i++)cout<<v[i]<<"\n";
}
 
