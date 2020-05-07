a;b;s;main(i){
	for(scanf("%d",&a);i<a;b=++i){
		while(b){
			s += b%10;
			b/=10;
			}
			if(s+i+b==a)break;
			s=0;	
		}
	printf("%d",i^a?i:0);
}
