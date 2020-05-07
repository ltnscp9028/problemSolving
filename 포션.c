#include <stdio.h>
long long p;i; long long q;long long w; main() {
	scanf("%lld %lld %lld", &p, &q, &w);
	for(;i<=(w/p);i++){
		if((w-p*i)%q==0) {
		printf("%d %d",i,(w-(i*p))/q);
		return 0;
		}	
	}
}
