#include <bits/stdc++.h>
using namespace std;

const int MAXN = 199999;
int d[MAXN];
int n,q;

struct BIT{
    int dat[MAXN];
    
    void update(int x, int p) {
      for(; x <= N; x += x & -x)
         dat[x]^=p;
   }
   
   void change(int x, int r, int p) {
      for(; x <= N; x += x & -x) {
         dat[x]^=r^p;
      }
   }
   
    int get(int w) {
      int r = 0;
      for(; w; w -= w & -w) r ^= dat[w];
      return r;
   }
   
    int get(int s, int e) {
      return get(e) ^ get(s-1);
   }
} B;

int main() {
   cin>>n>>q;
   for (int i = 1; i <= N; i++) {
      cin>>d[i];
      B.update(i, d[i]);
   }
   
   int t, a, b;
   for (int i = 0; i < Q; i++) {
      cin>>t>>a>>b;
      if (t == 1) {
         B.change(a, d[a], b);
         d[a] = b;
      }
      else {
         printf("%d\n", B.get(a, b));
      }
   }
   return 0;
}
