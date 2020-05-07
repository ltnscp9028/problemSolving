#include<bits/stdc++.h>
using namespace std;
int n,k,i,j,idx,tp;
vector<int>v;
int main(){
	scanf("%d %d",&n,&k);
	v.resize(k);
	for(i=0;i<k;i++){
		scanf("%d",&v[i]);
	}
	
//	idx = k;
//	printf("%d\n",idx);
	if(idx>=n){
		printf("1");
		return 0;
	}
	for(i=2;;i++){
		for(j=0;j<k;j++){
			tp += i/v[j];
		}
		if(tp>=n){
			printf("%d",i);
			break;
		}
		tp = 0;
	}
//	printf("%d",i);
}


