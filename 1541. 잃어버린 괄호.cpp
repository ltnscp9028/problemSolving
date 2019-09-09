#include <bits/stdc++.h> 
char a;
int i,t,p;
main(){
	for(scanf("%d",&t);scanf("%c",&a),a!=10;){
		a==45?i=1:0;
		scanf("%d",&p);
		t=i?t-p:t+p;
	}
	printf("%d",t);
}
