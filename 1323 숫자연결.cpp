/*#include <bits/stdc++.h>
using namespace std; 
long long a,b,c,i=10,t=1;main(){
	scanf("%d %d",&a,&b);
	c=a;
	for(;;i*=10){
		if(a%b==0)break;
		a+=c*i;
		t++;
		if(a%b==0)break;
	}
	cout<<t;
}*/
    
#include <cstdio>
using namespace std;

int main(){
	int N, M, K;
	long long p10 = 1;
	scanf("%d %d", &N, &K);
	
	while(p10 <= N) p10 *= 10;
	
	M = N % K;
	
	for(int i=1; i<=K; i++){
		if(M == 0){
			printf("%d\n", i);
			return 0;
		}
		M = (M*p10 + N) % K;
	}
	puts("-1");
}
