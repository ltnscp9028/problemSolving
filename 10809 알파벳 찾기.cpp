#include<bits/stdc++.h>
using namespace std;
string s;
int a[199],i;main(){
	fill(a,a+199,-1);
	for(cin>>s;s[i];i++)~a[s[i]] ? 0 : a[s[i]] =i;
	for(i=97;i<123;i++)printf("%d ",a[i]);
}
