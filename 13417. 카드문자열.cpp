#include<bits/stdc++.h>
using namespace std;
deque<char> dq;
int i,j,a,b,c;
char t;
main(){
	for(cin>>a;i<a;i++){
		cin>>b;
		for(j=0;j<b;j++){
			cin>>t;
			dq.empty()?dq.push_front(t):dq.front()<t?dq.push_back(t):dq.push_front(t);
		}
		for(;!dq.empty();dq.pop_front())cout<<dq.front();
		puts("");
	}
}

