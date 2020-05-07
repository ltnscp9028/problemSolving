i;k;h;j;b;main(a){
	for(scanf("%d %d",&a,&b);i<a;i++){
		a=a>0?a:~a+1;
		for(k=0;k<a+j;k++){
			putchar(k<j?32:42);
		}
		i<a/2?j++:j--;
		puts("");
	}
}
