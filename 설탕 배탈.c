b;main(a){
	scanf("%d",&a);
	for(;;){
		if(a%5==0){
			b+=a/5;
			printf("%d",b);
			break;
		}
		a-=3;
		b++;
		if(a<0){
		puts("-1");
		break;
		}	
	}
}


