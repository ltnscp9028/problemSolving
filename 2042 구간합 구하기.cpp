#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll arr[1000001],tree[4000004],b;
int n,x,y,a;


ll init(int node,int st,int ed){
	if(st==ed)return tree[node]=arr[st];
	int mid = (st+ed)/2;
	return tree[node] = init(node*2,st,mid) + init(node*2+1,mid+1,ed);
}

void update(int node,int st,int ed, int i, ll diff){
	if(i<st||ed<i)return;
	tree[node] = tree[node] + diff;
	int mid = (st+ed)/2;
	if(st!=ed){
		update(node*2,st,mid,i,diff);
		update(node*2+1,mid+1,ed,i,diff);
	}
}

ll query(int node,int st,int ed,int i, int j){
	if(j<st || ed<i)return 0;
	if(i<=st&&ed<=j)return tree[node];
	int mid = (st+ed)/2;
	return query(node*2,st,mid,i,j) + query(node*2+1,mid+1,ed,i,j);
}

int main(){
	scanf("%d %*d %*d",&n);
	for(int i=0;i<n;i++)scanf("%lld",&arr[i]);
	init(1,0,n-1);
	for(;~scanf("%d %d %d",&x,&a,&b);){
		if(x==1){
			ll diff = b - arr[a-1];
			arr[a-1]=b;
			update(1,0,n-1,a-1,diff);
		}
		else{
			printf("%lld\n",query(1,0,n-1,a-1,b-1));
		}	
	}
}
