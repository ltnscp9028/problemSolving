#include<bits/stdc++.h>
int a,b;
main(){
	for(scanf("%*d");~scanf("%d",&a);)b=*max(b,a);
	printf("%d",&b); 
}
