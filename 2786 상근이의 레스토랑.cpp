#define ll long long
#include<bits/stdc++.h>
using namespace std;
vector<pair<ll,ll> >p;
ll n,k,arr[500001],i,s;

bool cmp(const pair<ll,ll>&a,const pair<ll,ll>&b){
	return a.second < b.second;
}

signed main(){
	scanf("%lld",&n);
	for(p.resize(n);i<n;i++)scanf("%lld %lld",&p[i].first,&p[i].second);
	arr[n]=1234567890;
	for (sort(p.begin(),p.end(),cmp);--i>=0;)arr[i]=min(p[i].first,arr[i+1]);
	for (i=0;i<n;i++){
		if(p[k].second-p[k].first<p[i].second-p[i].first)k=i;
		s+=p[i].second;
		printf("%lld\n", min(s-p[k].second+p[k].first,s-p[i].second+arr[i]));
	}
}
