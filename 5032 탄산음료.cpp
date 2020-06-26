#include<bits/stdc++.h>
using namespace std;
int s,e,f,c,t;
int main(){
	for(cin>>e>>f>>c,s=e+f;s>=c;s = s/c + s%c)
		t += s/c;
	cout<<t;
} 
