#include<bits/stdc++.h>
using namespace std;
int i=1,n,m,j,k,val;
vector<int>tree[400001];

void update(int idx,int target,int value,int st,int ed){
	if(target<st || target>ed)return;
	tree[idx].push_back(value);
	int mid = (st+ed)/2;
	update(idx*2,target,value,st,mid);
	update(idx*2+1,target,value,mid+1,ed);
}

int query(int idx,int value ,int left,int right, int st, int ed){
	if(left>ed||right<st)return 0;
	if(left<=st&&ed<=right)
		return tree[idx].end() - upper_bound(tree[idx].begin(),tree[idx].end(),value);
	else{
		int mid = (st+ed)/2;
		return query(idx*2,value,left,right,st,mid) + query(idx*2+1,value,left,right,mid+1,ed);
	}
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	for(cin>>n;i<=n;i++){
		cin>>val;
		update(1,i,val,1,n);
	}
	int range = 400001;
	for(i=1;i<=range;i++)sort(tree[i].begin(),tree[i].end());
	cin>>m;
	for(;m--;){
		cin>>i>>j>>k;
		cout<<query(1,k,i,j,1,n)<<'\n';
	}
}
