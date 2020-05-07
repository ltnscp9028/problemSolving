#include<bits/stdc++.h>
using namespace std;
int arr[5000] , tree[5000][158]; 
int n,q,fs,fe,ss,se;
int va[158];
int vb[158];

void update(int x, int p) {
      for(; x <= n; x += x & -x)
         tree[x][p/32]|=(1<<p%32);
   }

 int get(int x){ 
 	int r = 0; 
	for(; x; x -= x & -x){
		for(int j=0;j<158;j++){
			va[j]|=tree[x][j];	
		}
	} 
		
		r = tree[x]; 
	return r; 
}

    int get(int s, int e){ 
		return get(e) | get(s - 1); 
}

	int gg(int fst, int fed , int sst, int sed){
		
		
		
	}

main(){
	scanf("%d %d",&n,&q);
	
	for(int i=1;i<=n;i++){
		scanf("%d",&arr[i]);
		update(i,arr[i]);
	}
	for(int j=0;j<=q;j++){
		scanf("%d %d %d %d",&fs,&fe,&ss,&se);
		get(fs,fe,ss,se);
	}
}
