#include <bits/stdc++.h>
using namespace std;
int a[10],i,j=-1;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    for(i=0;i<arr.size();i++){
        if(arr[i]!=j){
        answer.push_back(arr[i]);
        j=arr[i];
        }
    }

    return answer;
}