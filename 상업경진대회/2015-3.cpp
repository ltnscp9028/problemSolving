#include<bits/stdc++.h> 
using namespace std;
vector<int>v;
int n,i,j,a,b;main(){
	for(;;){
		cin>>n;
		if(n>1000){
			puts("�Է� ����");
			continue; 
		}	
		break;
	}
	for(i=1;i<n;i++)a+=i;
//	printf("%d",a);
	for(i=n+1;;i++){
		b+=i;
		v.push_back(i);
		if(a==b){
			printf("%d�� �߰����Դϴ�.\n",n);
			for(j=1;j<=n-1;j++){
				printf("%d%c",j,j==n-1?' ' : '+');
			}
			printf("= %d\n",a);
			for(j=0;j<v.size();j++) 
				printf("%d%c",v[j],j==v.size()-1?' ' : '+');
			printf("= %d",a);
			return 0;
		}
		
		else if(b>a){
		printf("%d�� �߰����� �ƴմϴ�.",n);
		return -1;
		}
	}
}
