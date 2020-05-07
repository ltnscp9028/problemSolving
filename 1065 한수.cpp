#include<bits/stdc++.h>
using namespace std;

int cnt=99,n,i,c,d,e;main(){
	cin>>n;
	if(n<100)cout<<n;
	else{
		for(i=100;i<=n;i++){
		c = i/100;
		d = i%100/10;
		e = i%100%10;
		
		d-c == e-d ? cnt++ : 0;
		}
		cout<<cnt;
	}
}
