/*a;main(){
	scanf("%d",&a);
	printf("%d",a/5+a%5/3+a%5%3);
}*/

a[10];i;p;main() {
	int c(int*a,int*b){return*a-*b;}
	for(;~scanf("%d",&a[i++]););
	p=a[0];
	printf("%d\n\n",p);
	qsort(a,sizeof(a)/sizeof(int),sizeof(int),c);
	
	for(i=0;i<10;i++){
		if(a[i]==p){
			a[8] = a[i] ^ a[8];
			a[i] = a[i] ^ a[8];
			a[8] = a[i] ^ a[8];
		}
	}
	for(i=0;i<10;printf("%d ",a[i++]));
}
