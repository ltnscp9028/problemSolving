a[11];m;c;i;main(g){
	for(scanf("%d %d",&g,&m);~scanf("%d",a+i++););
	for(;g--;m=m%a[g])c+=m/a[g];
	printf("%d",c);
}
