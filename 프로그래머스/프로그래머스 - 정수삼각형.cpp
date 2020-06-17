#include<bits/stdc++.h>
using namespace std;
int dp[503][503],i,j;
int solution(vector<vector<int>> v) {
    int ans = dp[0][0] = v[0][0];
    
    for(i=1; i<v.size(); i++){
        for(j=0; j<=i; ans = max(ans, dp[i][j++]+=v[i][j]))
            dp[i][j] = i==j || i==0 ? dp[i-1][j^0?j-1:j] : max(dp[i-1][j-1], dp[i-1][j]);
    }
    return ans;
}