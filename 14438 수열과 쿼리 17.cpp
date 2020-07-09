#include<bits/stdc++.h>
using namespace std;

int arr[100001],tree[400004],b;
int n,q,x,y,a;


int init(int node,int st,int ed){
	if(st==ed)return tree[node]=arr[st];
	int mid = (st+ed)/2;
	return tree[node] = min(init(node*2,st,mid), init(node*2+1,mid+1,ed));
}

int update(int node,int st,int ed, int i){
	if(i<st||ed<i)return tree[node];
	if(st==ed)return tree[node]= arr[i];
	int mid = (st+ed)/2;
	return tree[node] = min(update(node*2,st,mid,i),update(node*2+1,mid+1,ed,i));
}

int query(int node,int st,int ed,int i, int j){
	if(j<st || ed<i)return 9876543212;
	if(i<=st&&ed<=j)return tree[node];
	int mid = (st+ed)/2;
	return min(query(node*2,st,mid,i,j),query(node*2+1,mid+1,ed,i,j));
}

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++)scanf("%d",&arr[i]);
	init(1,0,n-1);
	for(scanf("%d",&q);q--;){
		scanf("%d %d %d",&a,&x,&y);
		if(a==1){
			arr[x-1]=y;
			update(1,0,n-1,x-1);
		}
		else printf("%d\n",query(1,0,n-1,x-1,y-1));
	}
}
