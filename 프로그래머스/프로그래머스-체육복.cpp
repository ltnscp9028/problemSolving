#include<bits/stdc++.h>
using namespace std;
int arr[31];
int i,j;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    for(i=1;i<=n;i++)arr[i]++;
    for(i=0;i<lost.size();i++)arr[lost[i]]--;
    for(i=0;i<reserve.size();i++)arr[reserve[i]]++;
    for(i=2;i<=n;i++){
        if(arr[i]==2){
            if(arr[i-1]==0)arr[i-1]=arr[i]=1;
            else if(arr[i+1]==0 && i+1<=n)arr[i+1]=arr[i]=1;
        }
    }
    for(i=1;i<=n;i++)arr[i]? answer ++ : 0;
    return answer;
}