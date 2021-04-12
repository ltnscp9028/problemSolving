#include<bits/stdc++.h>
using namespace std;
int arr[100050];
int n,q,w;
vector<int>v[200005];

set<int>s;
set<int>::iterator it;
void LB(){
	
}



main(){
	scanf("%d %d",&n,&q);
	 
	
	for(int i=1;i<=n;i++){
		scanf("%d",&arr[i]);
		s.insert(arr[i]);
		v[arr[i]].push_back(i);
	}
	//n upperbound - lowerbound
	
	for(int i=0;i<q;i++){
		int fs,fe,ss,se;
		int asd=0;
		//1 4 
		scanf("%d %d %d %d",&fs,&fe,&ss,&se);
		for(it=s.begin();it!=s.end();it++){
			//1,2,3,4(set s)
			int iitt = *it;
			auto onep = lower_bound(v[iitt].begin(),v[iitt].end(),fs);
			auto twop = lower_bound(v[iitt].begin(),v[iitt].end(),ss);
			auto vend= v[iitt].end();
			
			if((*onep>fe || onep==vend) && *twop<=se && twop!= vend ){
				asd = 1;
				break;
			}
			
			if((*twop>se || twop==vend) && *onep<=fe && onep!= vend ){
				asd = 1;
				break;
			}
		}
		puts(asd==1 ? "NO" : "YES");
		}
		
	}

		


