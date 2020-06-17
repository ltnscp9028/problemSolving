#include<bits/stdc++.h>
using namespace std;
deque<int>dq;
int i,j,tmp;
vector<int> solution(vector<string> operations) {
    vector<int> answer;
    for(i=0;i<operations.size();i++){
        string s="";
       if(operations[i][0]=='I'){
           if(operations[i][2]=='-')
               for(j=3;j<operations[i].length();j++)s+=operations[i][j];
           else
               for(j=2;j<operations[i].length();j++)s+=operations[i][j];
           tmp = operations[i][2]=='-' ? -1*stoi(s) : stoi(s);
           dq.push_back(tmp);
           sort(dq.begin(),dq.end());
       }
        else{
            if(operations[i][2]=='-' && !dq.empty())dq.pop_front();
            else if(!dq.empty())dq.pop_back();
        }
    }
    if(dq.empty())answer.resize(2,0);
    else{
        answer.push_back(dq.back());
        answer.push_back(dq.front());
    }
    return answer;
}