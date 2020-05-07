#include<bits/stdc++.h>
using namespace std;
char a[5],b[5];
int tc,aa,bb,i,j;
string tp;
main(){
	cin>>tc;
	for(;tc--;){
		scanf("%s",a);
		if(!strcmp(a,"6174")){
			cout<<"0\n";
			continue;
		}
//		for(i=0;;i++){
			sort(a,a+4);
			for(j=0;j<4;j++)b[j]=a[3-j];
			aa=atoi(b)-atoi(a);
			if(aa==6174)break;
			tp=to_string(aa);
			for(j=0;j<4;j++)a[j]=tp[j];
			cout<<a;	
		
//		cout<<i+1<<'\n';
	}
}

/*1112 2111 (999)
0999 9990 (8991)
1899 9981 (8082)
0288 8820 (8532)
2358 8532 (6174) 
*/
