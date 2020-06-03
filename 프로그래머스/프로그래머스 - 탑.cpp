#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> h) {
    vector<int> answer;
    answer.resize(h.size());
    int i,j;
    for(i=h.size()-1;i>=0;i--)
        for(j=i-1;j>=0;j--)
            if(h[i]<h[j]){
                answer[i] = j+1;
                break;
            }
        
    
    return answer;
}