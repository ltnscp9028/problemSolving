#include<bits/stdc++.h>
using namespace std;
int n,cnt,j;
vector<char>v;
int main(int i){
	cin>>n;
	v.resize(n+2);
	fill(v.begin(),v.end(),'C');
	if(n<5||n>100){
		puts("�Է� ����");
		return -1;
	}
	
	for (;i<=n;printf("--%d ���\n",i++)){
		for(j=1;j<=n;j++){
			if(j%i==0){
				v[j]=v[j]=='O'?'C':'O';	
			}
			printf("%c ",v[j]);
		}
	}
	for(i=1;i<=n;i++)v[i]=='Z'?cnt++:0;
	printf("���� ���� %d���Դϴ�.",cnt);
}

