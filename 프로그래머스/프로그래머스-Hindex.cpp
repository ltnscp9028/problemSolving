#include<bits/stdc++.h>
using namespace std;
int i;t
int solution(vector<int> citations) {
    sort(citations.begin(),citations.end(),greater<int>());
    for(;i<citations.size();i++)
        if(citations[i]<=i)return i;
}