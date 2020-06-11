#include<iostream>
#include<algorithm>
using namespace std;

int n,i,j;

int main(){
	cin>>n;
	if(n<1||n>10000){
		puts("입력오류");
		return -1; 
	}
	vector<int>v(n+2);
	for(i=1;i<=n;i++){
		cin>>v[i];
		if(v[i]<1||v[i]>1000000){
			puts("입력오류");
			return -1; 
		}	
	}
	for(i=1;i<=n;i++){
		for(j=i-1;j>0;j--){
			if(v[i]<v[j]){
				break;
			}
		}
		cout<<j<<' ';
	}
}
