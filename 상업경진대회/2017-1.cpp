#include<iostream>
using namespace std;
int n,s,ds,i,tmp[101];
int main(){
	cin>>n;
	if(n<1||n>100){
		puts("입력오류");
		return -1; 
	}
	for(;i<n;i++){
		cin>>ds>>s;
		if(ds<1||ds>10000000||s<1||s>10000000){
			puts("입력오류");
			return -1; 
		}
		tmp[i] = min(ds/4,s/12);
	}
	system("cls");
	puts("참가번호(01) 성명(홍길동) 학교명(경기정보고등학교)\n===========================================");
	for(i=0;i<n;i++)cout<<tmp[i]<<'\n';
}
