#include<bits/stdc++.h>
using namespace std;
int a,b,arr[43];
int main(){
	for(;~scanf("%d",&a);arr[a%42]++);
	for(b=a=0;a<43;a++)arr[a]?b++:0;
	cout<<b;
}
