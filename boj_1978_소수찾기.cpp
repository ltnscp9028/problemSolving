#include <iostream>
const int m=1e3+1;
int arr[m+9],n,i,j,l;
main(){
	for(arr[1]=i=2;i*i<m;i++)
		if(!arr[i])
			for(j=i*i;j<m;j+=i)
				arr[j]=1;
	for(std::cin>>n;n--;arr[i]?0:l++)std::cin>>i;
	printf("%d",l);
}
