a[100];p;q;i;j;t;k;main(){

	scanf("%d",&p);
	for(;i<=p;i++){
		scanf("%d",&q);
	
		for(j=0;j<=q;j++){
		scanf("%c",&t);
		printf("%d",t);
		a[t]++;
		}
		
		for(j=64;j<=90;j++){
			for(k=0;k<a[j];k++)printf("%c",j);
		}
		puts("");
	}
}
