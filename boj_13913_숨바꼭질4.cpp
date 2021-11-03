#include<bits/stdc++.h>
using namespace std;
const int ml=100001;
int n,nw,k,v[ml],chk[ml],d[ml];
queue<int>q;

void calc(int a){
	q.push(a);
	chk[a]++;
	v[a]=nw;
	d[a]=d[nw]+1;
}

void p(int a,int b){
	if(a!=b)p(a,v[b]);
	cout<<b<<' ';
}

main(){
	cin>>n>>k;
	for(chk[n]=1,q.push(n);!q.empty();){
		nw=q.front();
		q.pop();
		if(nw-1>=0 && !chk[nw-1])calc(nw-1);
		if(nw+1<ml && !chk[nw+1])calc(nw+1);
		if(nw*2<ml && !chk[nw*2])calc(nw*2);
	}
	cout<<d[k]<<'\n';
	p(n,k);
}
