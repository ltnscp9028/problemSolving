#include<bits/stdc++.h>
using namespace std;
stack<int>q;
vector<pair<int,int>>v;
string s;
int len,i,cnt;
int main(){
	cin>>s;
	len = s.length();
	if(len<3||len>30)return puts("입력오류");
	for(;i<len;i++){ 
		if(s[i]=='(')cnt++;
		if(s[i]==')')cnt--;
	}
	if(cnt)return puts("수식오류");
	for(i=0;i<len;i++){
		if(s[i]=='(')q.push(i);
		if(s[i]==')'){
			v.push_back({q.top()+1,i+1});
			q.pop();	
		}
	}
	sort(v.begin(),v.end());
	for(i=0;i<v.size();i++){
		printf("%d %d\n",v[i].first,v[i].second);
	}
}
