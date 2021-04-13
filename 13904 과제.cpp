#include <bits/stdc++.h>
using namespace std;
int n,i,m,arr[1001];
pair<int,int>p[1001];

bool cmp(pair<int,int>&a,pair<int,int>&b){
	return a.second > b.second;
}

int main(){
	for(cin>>n;i<n;i++)cin>>p[i].first>>p[i].second;
	sort(p,p+n,cmp);
	for(i=0;i<n;i++){
		int idx = p[i].first;
		if(!arr[idx])arr[idx]=p[i].second;
		else{
			for(;arr[--idx];);
			if(idx)arr[idx]=p[i].second;
		}
	}
	for(i=0;++i<1001;m+=arr[i]);
	cout<<m;
}