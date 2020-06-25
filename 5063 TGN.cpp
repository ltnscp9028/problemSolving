#include<bits/stdc++.h>
using namespace std;
int a,r,b;
int main(){
	for(cin>>a;~scanf("%d %d %d",&a,&b,&r);)puts(b-r>a?"advertise":b-r<a?"do not advertise":"does not matter");
}
