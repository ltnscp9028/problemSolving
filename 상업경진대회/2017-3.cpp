#include<iostream>
using namespace std;
int st,ed,i,n;
int main(){
	cin>>st>>ed;
	if(st<1||st>100||ed<1||ed>100)return puts("�Է� ����");
	
	
	for(i=st;i<=ed;i++){
		if((i/10==3||i/10==6||i/10==9) && (i%10==3 || i%10==6 || i%10==9))cout<<"�ڼ� �ڼ�";
		else if((i/10==3||i/10==6||i/10==9) || (i%10==3 || i%10==6 || i%10==9) || i%3==0)cout<<"�ڼ�"; 
		else cout<<i;
		if(i!=ed)cout<<" - ";
	}
}
