#include<bits/stdc++.h>
using namespace std; 
pair<int,int>p[200001];
priority_queue<int,vector<int>,greater<int> >pq;
int n,i,j,s,e;
int main(){
	for(cin>>n;i<n;i++)cin>>p[i].first>>p[i].second;
	sort(p,p+n);
  for(pq.push(p[0].second),i=0;++i<n;){
    if(pq.top()<=p[i].first)pq.pop();
    pq.push(p[i].second);
  }
  cout<<pq.size();
}