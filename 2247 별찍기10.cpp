#include<bits/stdc++.h>
//using namespace std;
int i,j,n,dx,dy; 
main(){
	for(cin>>n;i<n;i++){
		for(j=0;j<n;j++){
			dx=i;dy=j;
			for(;dx;dx/=3,dy/=3)
				if(dx%3==1&&dy%3==1)break;
			putchar(dx?32:42);
		}
		puts("");
	}
}
