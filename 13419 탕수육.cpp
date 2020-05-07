#include<bits/stdc++.h>
using namespace std;
int t,i,j,l,p,q;
char ts[54];
main(){
	cin>>t;
	for(;t--;){
		scanf("%s",ts);
		l=strlen(ts);
		if(l%2){
			for(i=0;i<l;i++)ts[l+i]=ts[i];
			for(i=0;i<l*2;i+=2)cout<<ts[i];
			puts("");
			for(i=1;i<l*2;i+=2)cout<<ts[i];
			puts("");
		}
		else{
			for(i=0;i<l;i+=2)cout<<ts[i];
			puts("");
			for(i=1;i<l;i+=2)cout<<ts[i];
			puts("");
		}
	}
}

