#include<bits/stdc++.h>
using namespace std;
int i,j,k,n,res,tp,ltp,tpmax,
arr[16][16],win[16],result[16], check[16];

main(){
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)scanf("%d",&arr[i][j]);
		
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			for(k=0;k<n;k++){
				tp +=arr[j][k];
				ltp += arr[k][j];
			}
			win[j] = tp;
			result[j] = tp-ltp;
			tp = 0;
			ltp = 0;
			
		}
		for(j=0;j<n;j++)result[j] = check[j]==1 ? -2147483648 : result[j];
		tpmax = max_element(result,result+n)-result;
//		cout<<tpmax<<' '<<win[tpmax]<<'\n';
		res += win[tpmax];
		check[tpmax] = 1;
		for(j=0;j<n;j++){
			arr[tpmax][j] = arr[j][tpmax] = 0;
//			cout<<result[j]<<' ';
		}	
//		puts("");
	}
	
//	for(i=0;i<n;i++)cout<<win[i]<<' ';
	cout<<res;
}

