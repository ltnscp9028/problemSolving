int i,j,a[5]={2},b[5]={0},s=0;
main(){
	for(i=1;i<5;i++){
		a[i] = a[i-1]*i;
		b[i] = b[i-1] +a[i];
		printf("%d %d\n",a[i],b[i]); 
	}
	puts("\n");
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			s+= a[i] * b[j];
			printf("%d\n",a[i] * b[j]);
		}
	}
	printf("%d",s);
}
