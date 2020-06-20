#include<bits/stdc++.h>
using namespace std;
int n,a;
vector<int>v;
int main(){
	for(cin>>n;n--;v.push_back(a))cin>>a;
	for(sort(v.begin(),v.end()),cin>>n;~scanf("%d",&n);){
		auto it = lower_bound(v.begin(),v.end(),n);	
		puts(*it^n?"0":"1");
	}
	
}
