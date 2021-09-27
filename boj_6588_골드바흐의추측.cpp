#include <stdio.h>
const int m=1e6;
int arr[m+9],n,i,j;
main(){
	for(i=2;i*i<m;i++)
		if(!arr[i])
			for(j=i*i;j<m;j+=i)
				arr[j]=1;

	for(;~scanf("%d",&n);){
		for(i=2;++i<n;)
			if(!arr[i]&&!arr[n-i]){
				printf("%d = %d + %d\n",n,i,n-i);
				break;
			}	
	}
}
