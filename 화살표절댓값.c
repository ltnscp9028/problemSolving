i;k;h;j;b;main(a){
	scanf("%d %d",&a,&b);
	a=a>0?a:~a+1;
	for(;i<a;i++){
		for(k=0;k<a+j;k++){
			putchar(k<j?32:42);
		}
		i<a/2?j++:j--;
		puts("");
	}
}
