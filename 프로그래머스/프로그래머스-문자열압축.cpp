#include<bits/stdc++.h>
using namespace std;
int hflen,len,j,k,i=1,min_len=1001,lll;
string tmp,tmp2,tmp3;
queue<string> q,tempq,qq; 
int solution(string s) {
    hflen =len = s.length();
    if(len==1)return 1;
    for(hflen/=2;i<=hflen; min_len = min(min_len,lll),i++){
        for(j=0;j<len;j+=i,k++)q.push(s.substr(j,i));
        tempq = q;
        vector<int>v;
        for(j=0;!q.empty();v.push_back(j),j=0){
            tmp = q.front();
            q.pop();
            qq = q;
            for(;!qq.empty();j++){
                string tmp2 = qq.front();
                qq.pop();
                if(tmp!=tmp2)break;
            }
        }      
            tmp3="";
            for(k=0;k<v.size();){
                if(v[k]==0){
                    tmp3+=tempq.front();
                    tempq.pop();
                    k++;
                }
                else{
                    tmp3+=to_string(v[k]+1)+tempq.front();
                    for(j=0;j<=v[k];j++)tempq.pop();
                    k+=j;
                }
            }
            lll = tmp3.length();
        }   
    return min_len;
}