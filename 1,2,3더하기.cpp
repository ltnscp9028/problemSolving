#include <bits/stdc++.h>
int d[101]={1,1,1,1};int a;main(int i){
	for(i=4;i<=100;i++)d[i]=d[i-2]+d[i-3];
	
	for(std::cin>>a;~scanf("%d",&a);printf("%d\n",d[a]));
}
