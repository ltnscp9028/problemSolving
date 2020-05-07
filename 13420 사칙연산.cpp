#include<bits/stdc++.h>
using namespace std;
long long t,a,c,s,g;
char b;
main(){
	cin>>t;
	for(;t--;){
		scanf("%lld %c %lld = %lld",&a,&b,&c,&s);
		if(b=='*')g=a*c;
		if(b=='-')g=a-c;
		if(b=='+')g=a+c;
		if(b=='/')g=a/c;
		puts(s==g?"correct":"wrong answer");
	}
}
