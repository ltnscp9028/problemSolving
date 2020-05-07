a[9];j;i;s=-100;main(p,q){
	for(;~scanf("%d",&a[i]);s+=a[i++]);
		int c(const void *a, const void *b){return *(int *)a - *(int *)b; }
		qsort(a, sizeof(a) / sizeof(int), sizeof(int), c);
	for(;j<9;j++)
		for(i=0;i<9;(a[j]+a[i])^s?0:(p=j,q=i),i++);
	for(i=0;i<9;(i^p)&&(i^q)?printf("%d\n",a[i++]):i++);
}

