#include<bits/stdc++.h>
using namespace std;
int tc,a[101],b,mm=101,i;
main(){
	cin>>tc;
	for(i=0;i<tc;i++)cin>>a[i];
	for(i=0;i<tc;i++){
		cin>>b;
		if(b==0)continue;
		if(a==0&&b!=0){
			mm=0;
			break;
		}
		mm=min(mm,a[i]/b);
	}
	cout<<mm;
	return 0;
}


