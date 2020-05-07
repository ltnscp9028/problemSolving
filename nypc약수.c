int i,j,p,a,b,cnt,count[10000001];
main(){
	scanf("%d %d",&a,&b);
	for (i = 1; i <= b; i++){
		p = 10000000 / i;
		for (j = 1; j <= p; j++) { 
			count[i * j]++; 
		} 
	}
	for(i=a;i<=b;i++)cnt+=count[i];
	printf("%d",cnt);

}
