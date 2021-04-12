#include<bits/stdc++.h>
using namespace std;
vector<pair<char,int> >v;
int n,i,r;
char b;
int main(){
	cin>>n;
	if(n<1||n>100)return puts("입력오류");
	for(;i<n;i++){
		cin>>b>>r;
		if(b!='G'&&b!='B'&&b!='R'&&b!='Y'||r<100||r>9999)return puts("입력오류");
	 	v.push_back({b,r});
	}
	sort(v.begin(),v.end());
	for(i=0;i<n;i++)printf("%c %d\n",v[i].first,v[i].second);
} 
