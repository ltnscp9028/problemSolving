i;main(a){
	for(scanf("%d",&a);a!=1;i++){
		a%3?a%2?a-=1:(a/=2):(a/=3);
	}
	printf("%d",i);
}
