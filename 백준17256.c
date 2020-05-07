a[9];i;main(){
	for(;~scanf("%d",a+i++););
	a[6]=a[3]-a[2]; 
	a[7]=a[4]/a[1]; 
	a[8]=a[5]-a[0]; 
	printf("%d\n\n",i);
	for(;i<8;printf("%d ",a[++i]));
//	printf("%d %d %d",a[6],a[7],a[8]);
}
