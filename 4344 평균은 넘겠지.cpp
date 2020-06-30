#include<bits/stdc++.h>
using namespace std;
double s;
int n,i,j,cnt,arr[1001];
int main(){
	for(scanf("%d",&n);n--;){
		for(s=i=0,scanf("%d",&j);i<j;i++){
			scanf("%d",&arr[i]);
			s+=arr[i];
		}
		s/=j;
		for(cnt=i=0;i<j;i++)if(arr[i]>s)cnt++;
		printf("%.03lf%%\n",cnt/(double)j*100);
	}
}
