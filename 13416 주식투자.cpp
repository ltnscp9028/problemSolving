#include<bits/stdc++.h>
using namespace std;
int t,s,n,a,b,c,i,p;
main(){
	cin>>t;
	for(;t--;){
		cin>>n;
		p=0;
		s=0;
		for(i=0;i<n;i++){
			cin>>a>>b>>c;
			p=max(a,max(b,c));
			s+=p>0?p:0;
		}
		cout<<s<<"\n";
	}
}
