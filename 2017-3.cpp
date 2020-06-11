#include<iostream>
using namespace std;
int st,ed,i,n;
int main(){
	cin>>st>>ed;
	if(st<1||st>100||ed<1||ed>100)return puts("입력 오류");
	
	
	for(i=st;i<=ed;i++){
		if((i/10==3||i/10==6||i/10==9) && (i%10==3 || i%10==6 || i%10==9))cout<<"박수 박수";
		else if((i/10==3||i/10==6||i/10==9) || (i%10==3 || i%10==6 || i%10==9) || i%3==0)cout<<"박수"; 
		else cout<<i;
		if(i!=ed)cout<<" - ";
	}
}
