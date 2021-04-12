#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100000000;

int N, E[MAXN], D[MAXN];
int all;
int dp[1 << 25];

int vv(int d, int s) {
    for (int i = 0; i < N; i++) {
       if ((s&(1 << i)) == 0) {
          if (E[i] <= d)
             s |= (1 << i);
      }
   }
   
    if (s == all) return d;

    int& ref = dp[s];
//    if (ref != 0) return ref;
   
    int m = 0;
   for (int i = 0; i < N; i++) {
      if ((s&(1 << i)) == 0) {
         m = max(m, vv(d + D[i], s|(1 << i)));
        }
   }
   
//   return ref = m;
    return ref = max(ref, m);
}
main() {
   cin>>N;
   all = (1 << N) - 1;
   for (int i = 0; i < N; i++) cin>>E[i]>>D[i];
   
   printf("%d", vv(0, 0));
}
