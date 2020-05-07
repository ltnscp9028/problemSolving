#include <bits/stdc++.h>
using namespace std;
int n,k,a[100000001]; main() {
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++)scanf("%d",&a[i]);
	sort(a,a+n);
	cout<<a[n-1];
}
