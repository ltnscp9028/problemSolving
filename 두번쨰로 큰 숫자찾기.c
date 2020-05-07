a[10];i;t;main(){
	for(;~scanf("%d",a+i++););
	for(i=0;i<10;i++) t = a[t]>a[i]? t : i;	
	printf("%d\n\n",t);
	i= a[0];
	a[0] = a[t];
	a[t] = i;
	for(i=0;i<10;printf("%d ",a[i++]));
}

