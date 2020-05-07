#include <bits/stdc++.h>
using namespace std;
int tc,i,j,k,length,wos,bos;
char os[100001],answer[100001];

main(){
	cin>>tc;
	for(;tc--;){
		wos=0;
		bos=0;
		cin>>length;
		scanf("%s\n%s",os,answer);
		for(i=0;i<length;i++){
			if(os[i]==answer[i])continue;
			(os[i]=='W'&&answer[i]=='B')?wos++:bos++;
		
		}
		printf("%d\n",wos>bos?wos:bos);
	}
}
