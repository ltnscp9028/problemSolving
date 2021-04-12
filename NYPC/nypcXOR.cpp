#include<bits/stdc++.h>
using namespace std;
const int MAXN = 131072;
int num[300000];
int n,q,t,a,b;
int dat[MAXN];
    
    void upd(int x, int p){ for(dat[x]=p; x <= n; x += x & -x) dat[x]^=p; }
    int get(int x){ int r = 0; for(; x; x -= x & -x) r ^= dat[x]; return r; }
    int get(int s, int e){ return get(e) - get(s - 1); }

int main() {
    scanf("%d %d",&n,&q);
    
    for (int i=1; i<=n; i++) {
        scanf("%d",&num[i]);
        upd(i, num[i]);
    }
	
    
    for(int i=0;i<q;i++){
    	scanf("%d %d %d",&t,&a,&b);
    	if(t==1){
    		int diff = b ^ num[a];
            num[a] = b;
    		upd(a,diff);
		}
    	else
    		printf("%d\n",get(a,b));
	}	
	return 0;
}
