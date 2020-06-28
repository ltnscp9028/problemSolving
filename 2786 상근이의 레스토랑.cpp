#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> >p;
int n,k,arr[500001],i;

int main(){
	for(scanf("%d",&n),p.resize(n);i<n;i++)scanf("%d %d",&p[i].first,&p[i].second);
	sort(p.begin(),b.end());
	arr[n] = 987654321;
	for(i=n-1;i>=0;i--)arr[i]=min(p[i].first,arr[i+1]);
	for(i=0;i<n;i++){
	}
}
