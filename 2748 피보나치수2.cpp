#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll arr[92]={0,1},i=2,n;
int main(){
	for(cin>>n;i<=n;i++)
		arr[i] = arr[i-1] + arr[i-2];
	printf("%lld",arr[n]);
}
