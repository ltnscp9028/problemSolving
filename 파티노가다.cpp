#include<stdio.h>
using namespace std;
int arr[100050];
int n,q,w;
int fs,fe,ss,se;
main(){
	scanf("%d %d",&n,&q);
	
	for(int i=1;i<=n;i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<q;i++){
		
		int asd=0;
		set<int>s1;
		set<int>s2;
		
		scanf("%d %d %d %d",&fs,&fe,&ss,&se);
		for(int j=fs;j<=fe;j++)s1.insert(arr[j]);
		for(int j=ss;j<=se;j++)s2.insert(arr[j]);
		
		
		puts(s1==s2?"YES":"NO");
//		puts(asd==1 ? "NO" : "YES");	
	}
	
/*	
	for(it=s.begin();it!=s.end();it++){
		printf("v[%d] : ",*it);
		for(int j=0;j<v[*it].size();j++){
			cout<<v[*it][j]<<' ';
		}
		puts("");
	}
*/
}
		


