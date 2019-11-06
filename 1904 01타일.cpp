#include<bits/stdc++.h>
using namespace std;
int d[1000001] = {1,2},n,i=2;
main(){
	for(cin>>n;i<n;i++)d[i]=(d[i-1]+d[i-2])%15746;
	
	cout<<d[n-1];

}
