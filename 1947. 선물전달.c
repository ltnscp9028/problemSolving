//a;p;s;i;main(q){
//	for(i=scanf("%d",&a);++i<a;)s=(a-1)*(p+q);
//}
long long d[1000001]={0,0,1},t;main(i){
	for(i+=scanf("%d",&t);++i<=t;)
	d[i]=((i-1)*(d[i-1]+d[i-2]))%1000000000;
	
	printf("%d",d[t]);
}
