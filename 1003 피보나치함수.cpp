#include <bits/stdc++.h>
using namespace std;
pair<int,int>p[41]={make_pair(1,0)};	
int n,i;main(){
	p[1]=make_pair(0,1);
	for(i=1;++i<=40;p[i]=make_pair(p[i-1].first+p[i-2].first,p[i-1].second+p[i-2].second));
	for(scanf("%*d");~scanf("%d",&n);)printf("%d %d\n",p[n].first,p[n].second);
}	


