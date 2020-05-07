#include<bits/stdc++.h>
#define int long long
using namespace std;
string k;
int a[100],i,j=1,s;main(){
	for(i=65;i<91;i++)a[i]=j++;
	cin>>k;
	reverse(k.begin(),k.end());
	for(i=0;i<=k.length();i++)	s +=pow(26,i)*a[k[i]];	
	cout<<s;
}

