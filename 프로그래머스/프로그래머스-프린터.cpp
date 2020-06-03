#include<bits/stdc++.h>
using namespace std;
queue<pair<int,int> >q;
priority_queue<int>pq;
int cnt,i,answer = 1;;

int solution(vector<int> p, int location) {
    
    for(;i<p.size(); pq.push(p[i++]))q.push({p[i],i});
  
    for(;;){
        if(q.front().first==pq.top()){
            printf("%d ",pq.top());
            if(q.front().second==location)return answer;
            q.pop();
            pq.pop();
            answer++;
        }
        else{
            q.push(q.front());
            q.pop();
        }
    }
}