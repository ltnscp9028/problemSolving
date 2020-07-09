#define ll long long
#include<bits/stdc++.h>
using namespace std;
struct p{int k,st,ed,idx;};
bool cmp(p a, p b){return a.k<b.k;}
ll arr[100001],tree[400004],ans[100001],b;
ll n,q,x,y,a,qn,cnt,ut;
vector<pair<ll,ll>>v;
vector<p>vv;

ll init(int node,int st,int ed){
	if(st==ed)return tree[node]=arr[st];
	int mid = (st+ed)/2;
	return tree[node] = init(node*2,st,mid) + init(node*2+1,mid+1,ed);
}

ll update(int node,int st,int ed, int i, ll diff){
	if(st>i||ed<i)return tree[node];
	if(st==ed)return tree[node] = diff;
	int mid = (st+ed)/2;
	return tree[node] = update(node*2,st,mid,i,diff) + update(node*2+1,mid+1,ed,i,diff);
}

ll query(int node,int st,int ed,int i, int j){
	if(j<st || ed<i)return 0;
	if(i<=st&&ed<=j)return tree[node];
	int mid = (st+ed)/2;
	return query(node*2,st,mid,i,j) + query(node*2+1,mid+1,ed,i,j);
}

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++)scanf("%lld",&arr[i]);
	init(1,0,n-1);
	for(scanf("%d",&q);q--;){
		scanf("%d",&qn);
		if(qn==1){
			scanf("%d%d",&x,&y);
			v.push_back({x,y});
		}
		if(qn==2){
			scanf("%d%d%d",&x,&y,&a);
			vv.push_back({x,y,a,cnt++});
		}
	}
	sort(vv.begin(),vv.end(),cmp);
	for(int i=0;i<vv.size();i++){
		for(;vv[i].k!=ut;ut++)
			update(1,0,n-1,v[ut].first-1,v[ut].second);
		ans[vv[i].idx] = query(1,0,n-1,vv[i].st-1,vv[i].ed-1);
	}
	for(int i=0;i<cnt;i++)printf("%lld\n",ans[i]);
}
