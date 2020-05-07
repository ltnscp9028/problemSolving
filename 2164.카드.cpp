#include<iostream>
#include <queue>
using namespace std;
int a,i,p;main(){
	queue<int> q;
	for(i=scanf("%d",&a);i<=a;q.push(i++));	
	for(;q.size()!=1;){
		q.pop();
		p=q.front();
		q.pop();
		q.push(p);
	}
	printf("%d",q.front());
}
