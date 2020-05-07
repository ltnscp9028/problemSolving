a[1001];i;p;s;main(t){
	for(scanf("%d",&t);~scanf("%d",&a[i++]););
		int c(const void *a, const void *b){return *(int *)a - *(int *)b; }
		qsort(a, sizeof(a) / sizeof(int), sizeof(int), c);
		for(i=1001-t;i<1001;s += p+a[i],p +=a[i++]);
		printf("%d",s);
	}

