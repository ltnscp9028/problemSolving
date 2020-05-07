#include<bits/stdc++.h>
using namespace std;
string s;
set<> p;
main(int n){
	for(cin>>n;n--;sort(s.begin(),s.end()),p.insert(s))cin>>s;
	cout<<p.size();
}
