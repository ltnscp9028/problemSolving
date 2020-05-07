i=6;c;t[6]={1,5,10,50,100,500};main(a){
	scanf("%d",&a);
	for(a=1000-a;i--;a%=t[i])c+=a/t[i];
	printf("%d",c);
}

