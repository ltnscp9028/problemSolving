#include<bits/stdc++.h>
using namespace std;
int i,j,a,b,cnt[10000001];
main(){
	scanf("%d %d",&a,&b);
	for(int i = a; i<= b; i++){ 
		for(int j = 1; j <= j/i; j++){ count[i * j]++; 
		cnt +=count[i*j];
		} 
	}
	printf("%d",cnt);

}

