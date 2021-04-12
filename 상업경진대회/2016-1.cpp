#include<bits/stdc++.h>
using namespace std;

int n,i,j,k,x,y,arr[130][130],cnt;
int main(){
    for(cin>>n;i<n;i++){
    	if(n<1||n>100){
    		puts("입력 오류");
    		return -1; 
		}
		
    	cin>>x>>y;
		for(j=x;j<x+10;j++)
			for(k=y;k<y+10;k++)
				arr[k][j]++;
	}
	for(i=0;i<100;i++)
		for(j=0;j<100;j++)arr[i][j]?cnt++:0;
	cout<<cnt;
}
