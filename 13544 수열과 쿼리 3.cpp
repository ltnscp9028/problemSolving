#include<bits/stdc++.h>
using namespace std;
int n, m,a,b,c,ans,i,val;
vector<int> tree[400004];
void update(int node, int target, int value, int st, int ed) {
	if (target<st||target>ed)return;
	tree[node].push_back(value);
	if (st!=ed){
		int mid = (st+ed)/2;
		update(node*2,target,value,st,mid);
		update(node*2+1,target,value,mid+1,ed);
	}
}

int query(int node, int value, int left, int right, int st, int ed) {
	if (left>ed||right<st)return 0;
	
	if (left<=st&&ed<=right) 
		return tree[node].end() - upper_bound(tree[node].begin(),tree[node].end(),value);
	int mid=(st+ed)/2;
	return query(node*2,value,left,right,st,mid) + query(node*2+1,value,left,right,mid+1,ed);
}

int main(){
	for(scanf("%d",&n),i=1;i<=n;update(1,i,val,1,n),i++)scanf("%d",&val);
	for (i=1;i<400004;i++)sort(tree[i].begin(),tree[i].end());
	for(scanf("%d",&m);m--;){
		scanf("%d%d%d",&a,&b,&c);
		ans = query(1, c^ans, a^ans, b^ans, 1, n);
		printf("%d\n",ans);
	}
}
