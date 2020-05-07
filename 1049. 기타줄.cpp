#include <bits/stdc++.h>
using namespace std; 
int a,b,i,j,c,p[51],n[51];main(){
	cin>>a>>b;
	for(;i<b;i++)cin>>p[i]>>n[i];
	sort(p,p+b);
	sort(n,n+b);
	for(;a>0;){
		if(a>=6&& p[1]<n[i]*6){
			a-=6;
			c+=p[0];
		}
		else if(a<6 && p[1]<n[1]*a){
			c+=p[0];
			a-=6;
		}
		else{
			c+=n[0]*a;
			a=0;
		}
	}
//	for(i=0;i<b;i++)cout<<p[i].first<<" "<<p[i].second<<endl;
		
	printf("%d",c);
}

//4 10

/*12 + 12 = 24;*/
