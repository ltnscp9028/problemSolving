M=-1000001,m=1000001;main(a){
	for(gets(&a);~scanf("%d",&a);m=a<m?a:m)M=a>M?a:M;
	printf("%d %d",m,M);
}
