#include<bits/stdc++.h>
using namespace std;
long long answer,i,dp[85] = {0,1,1};
long long solution(int N) {
    for(i=3;i<=N;dp[i++] = dp[i-1] + dp[i-2]);
    answer = dp[N]*2 + (dp[N]+dp[N-1])*2;
    return answer;
}