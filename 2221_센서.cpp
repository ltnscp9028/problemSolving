#include <bits/stdc++.h>
using namespace std;
int n,k,i,j,m;
vector<int>v;
vector<int>v1;
int main(){
	for(cin>>n>>k,v.resize(n);i<n;)cin>>v[i++];
	if(k>=n){
		cout<<0;
		return 0;
	}
	sort(v.begin(),v.end());

	for(i=0;i<v.size()-1;i++)v1.push_back(abs(v[i+1]-v[i]));
	sort(v1.begin(),v1.end());
	for(i=0;i<n-k;i++)m+=v1[i];
	cout<<m;
}