#include <bits/stdc++.h>
using namespace std;
int i,answer,t,start;
vector<pair<int,int>>v;
int solution(vector<vector<int>> jobs) {
    for(;i<jobs.size();i++)v.push_back({jobs[i][1],jobs[i][0]});
    for(sort(v.begin(),v.end());!v.empty();){
        for (i = 0; i < v.size(); i++) {
            if (v[i].second <= start) {
                start += v[i].first;
                t += start - v[i].second;
                v.erase(v.begin() + i);
                break;
            } 
            if (i == v.size()-1) start++;
        }
    }
    return t/jobs.size();
}