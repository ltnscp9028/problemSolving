#include <stdio.h>
 
int main() {
    int arr[301][301] = { 0 };
    int dp[301][301] = { 0 };
    int N, M, T;
    int a, b, x, y;
    int r = 0;
	int i=1;
	int j=1; 
    scanf("%d %d", &N, &M);
    
    for (i = 1; i <= N; i++) {
        for ( j = 1; j <= M; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
 
    for (i = 1; i <= N; i++) {
        dp[i][1] = arr[i][1] + dp[i - 1][M];
//        printf("dp[%d][1] : %d\n",i,dp[i][1]);
        for (j = 2; j <= M; j++) {
            dp[i][j] += dp[i][j-1] + arr[i][j];
//            printf("dp[%d][%d] : %d\n",i,j,dp[i][j]);
        }
        
    }
 
    scanf("%d", &T);
 
    for (i = 1; i <= T; i++) {
        scanf("%d %d %d %d", &a, &b, &x, &y);
        for (a; a <= x; a++) {
            r += dp[a][y] - dp[a][b]+ arr[a][b];
//	    	printf("r :%d\n",r);    
			printf("dp[%d][%d] : %d\n-dp[%d][%d] : %d\narr[%d][%d] : %d\nr : %d\n",
			    	a,y,dp[a][y],a,b,dp[a][b],a,b,arr[a][b],dp[a][y] - dp[a][b]+ arr[a][b]);
		}
        printf("%d\n", r);
        r = 0;
    }
 
    return 0;
}
