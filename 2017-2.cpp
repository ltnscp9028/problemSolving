#include<iostream>
#include<algorithm>
using namespace std;
int n,a,b,t,j,i,tmp;
vector<pair<int,int> >v[10];
int main(){
	cin>>n;
	if(n<1||n>100)
	return puts("입력오류");
	
	for(;n--;v[t].push_back({a,b}))
	scanf("%*2d%1d %d %d",&t,&a,&b);	
	
	
	for(system("cls");i<10;i++){
		sort(v[i].begin(),v[i].end());
		for(j=0;j<v[i].size();j++)printf("01%d %d %d\n",i,v[i][j].first,v[i][j].second);
	}
}
