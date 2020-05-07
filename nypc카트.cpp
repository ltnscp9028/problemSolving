#include<bits/stdc++.h>
using namespace std; 
int n; 
int w[16][16]; 
int dp[16][1 << 16]; 
int avisit;

int tsp(int node, int visited){ 
	
	 if (visited == avisit) return 0; //모두 방문한 경우 끝 

 
    int& r = dp[node][visited];
    if (r != 0)
        return r;
 
    int m = 0, tmp;
    
    for (int i = 0; i < n; i++) {
        if (((visited&(1 << i)) == 0) && (w[node][i] != 0)) {
           tmp = 0;
           for (int j = 0; j <n; j++) {
              if ((visited&(1 << j)) == 0) {
                 tmp += w[j][node];
            }
         }
         tmp += tsp(i, (visited | (1 << i)));
           
           m = max(m, tmp);
        }
    }
    r=m; 
    return r;
} 
int main(){ 
	cin>>n;
    avisit = (1 << n) - 1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin>>w[i][j];
   
   int m = 0;
   for (int i = 0; i < n; i++)
      m = max(m, tsp(i, 1 << i));
    
	cout<<m;
	
}
