#include<bits/stdc++.h>
using namespace std;
int i,j,k,a[101],check,cnt;

vector<int> solution(vector<int> p, vector<int> s) {
    vector<int> answer;
    int ln = p.size();
    for(;;){
        for(i=0;i<ln;i++)p[i]+=s[i];
        
        if(p[check]>=100){
            cnt = 0;
            for(i=check;i<ln;i++){
                if(p[i]>=100)cnt++;
                else break;
            }
            answer.push_back(cnt);
            check += cnt;
        }
        if(check==p.size())break;
    }
    return answer;
}