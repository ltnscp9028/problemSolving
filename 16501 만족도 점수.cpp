#include<bits/stdc++.h>
using namespace std;
int a[8],i,k,m=987654321;
float p;
main(){
	for(;~scanf("%d",a+i++););
	std::sort(a,a+8);
	do{
		k = max(abs(a[0]+a[3]-a[1]-a[2]),abs(a[4]+a[7]-a[5]-a[6]));
		m = min	(m,k);
	}while(next_permutation(a,a+8));
	p = 1-m/20.0;
	printf("%g",p==1 ? 1.0 : p>1 ? 0.0 : p);
}




