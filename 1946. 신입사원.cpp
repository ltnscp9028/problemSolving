#include <bits/stdc++.h> 
using namespace std;
pair<int,int>p[100001];
int a,b,ct,i,j,k,ck;main(){
	for(cin>>a;i<a;i++){
		cin>>b;
		for(j=0;j<b;j++){
			cin>>p[j].first>>p[j].second;
		}
		sort(p,p+b);
		ct=1;
		ck=p[0].second;
		for(j=1;j<b;j++)
			ck>p[j].second?ck=p[j].second,ct++:0;
		printf("%d\n",ct);
	}		
}z
