#include<bits/stdc++.h>
using namespace std;
pair<int,int>p[11];
int n,m,b,i,j,t,cnt,arr[11];

main(){
	cin>>n>>m>>b;
	t=b;
	cin>>p[i].first>>p[i].second;
	if(p[i].second==1){
		arr[p[i].first]++;
		cnt++;
	}
	
	for(;++i<m;){
		cin>>p[i].first>>p[i].second;
		if(p[i].second==0)continue;
		if(p[i].second==1&&arr[p[i-1].first]==0){
			cnt++;
			arr[p[i].first]++;
		}
		if(p[i].second==1&&arr[p[i-1].first]!=0){
			arr[p[i-1].first]--;
			arr[p[i].first]++;
		}
	}
	
	cout<<cnt;
}
