#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll arr[100001],tree[400004],idx;
int n,q,l,r,qn;


void init(int node,int st,int ed){
	if(st==ed){
		tree[node]=arr[st];
		return;
	}
	tree[node]=0;
	int mid = (st+ed)/2;
	init(node*2,st,mid);
	init(node*2+1,mid+1,ed);
}

void update(int node,int st,int ed, int i,int j, ll diff){
	if(j<st||ed<i)return;
	if(i<=st&&ed<=j){
		tree[node]+=diff;
		return;
	}
	int mid = (st+ed)/2;
	update(node*2,st,mid,i,j,diff);
	update(node*2+1,mid+1,ed,i,j,diff);
}

ll query(int node,int st,int ed,int i, ll diff){
	if(i<st||ed<i)return 0;
	diff += tree[node];
	if(st==ed)return diff;
	int mid = (st+ed)/2;
	return query(node*2,st,mid,i,diff) + query(node*2+1,mid+1,ed,i,diff);
}

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++)scanf("%lld",&arr[i]);
	init(1,0,n-1);
	for(scanf("%d",&q);q--;){
		scanf("%d",&qn);
		if(qn==1){
			scanf("%d%d%lld",&l,&r,&idx);
			update(1,0,n-1,l-1,r-1,idx);
		}
		if(qn==2){
			scanf("%lld",&idx);
			printf("%lld\n",query(1,0,n-1,idx-1,0));
		}
	}
}
