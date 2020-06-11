#include<iostream>
#include<algorithm>
using namespace std;

typedef struct th{
	int w;
	int t;
};
int n,i,j;
vector<th>v;
int main(){	
	cin>>n;
	v.resize(n);
	for(;i<n;i++)cin>>v[i].w>>v[i].t;
	for(i=0;i<n;i++){
		int cnt = 1;
		for(j=0;j<n;j++){
			v[i].w < v[j].w && v[i].t < v[j].t ? cnt++: 0;
		}	
		cout<<cnt<<' ';
	}
}
