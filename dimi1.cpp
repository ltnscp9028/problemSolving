#include<bits/stdc++.h>
using namespace std;
int n,i,j,idx1,idx2;
pair<int,int>p[1001];
float mx,tmp,arr;
int main(){
	for(cin>>n;i<n;i++){
		scanf("%d %d",&p[i].first,&p[i].second);
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			tmp = sqrt(pow(p[i].first-p[j].first,2)+pow(p[i].second-p[j].second,2));
			if(tmp>mx){
				mx=tmp;
				idx1 = i;
				idx2 = j;
			}
			else if(tmp==mx){
				if(idx1>i){
					idx1=i;
					idx2=j;
				}
				else if(idx1==i){
					if(idx2>j){
						idx1=i;
						idx2=j;
					}
				}
			}
		}
	}
	
	printf("%d %d",idx1+1,idx2+1);
}
