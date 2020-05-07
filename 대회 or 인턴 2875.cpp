#include <bits/stdc++.h>
using namespace std;
int a,b,c,i;main(){
	for(cin>>a>>b>>c;c--;)
		b*2>a?b--:a--;	
	cout<<(b*2>a?a/2:b);
}
