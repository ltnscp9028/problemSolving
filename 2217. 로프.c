a[100001];i;t;s;p;k;tk;main(){
	for(scanf("%d",&t);~scanf("%d",&a[i++]););
	int c(int*a,int*b){return*b-*a;}
	k=a[0];qsort(a,sizeof(a)/sizeof(int),sizeof(int),c);
	for(i=0;i<t;tk=a[++i]*(i+1))k=tk>k?tk:k;
	printf("%d",k);
}

