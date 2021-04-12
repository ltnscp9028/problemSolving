#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int tmp,tp,i,j,a[3][3];

int main(){
	for(i=0;i<3;i++)
		for(j=i;j<3;j++)
			cin>>a[i][j-i];
			
	system("cls");
	
	for(i=0;i<3;i++)
		for(j=i;j<3;j++)
			if(a[i][j-1]==0){
				puts("입력 오류");
				return -1;			 
			}

	for(i=0;i<6;i++){
		v.push_back(a[2][0]);
		tp = a[1][0] > a[1][1] ? 0 : 1;
		a[2][0] = a[1][tp];

		tmp = tp==0 ? a[0][0] > a[0][1] ? 0 : 1 : a[0][1] > a[0][2] ? 1 : 2;
		a[1][tp] = a[0][tmp];
		a[0][tmp] = -1;

		
	}
	for(i=0;i<6;i++)printf("%d ",v[i]);
}
