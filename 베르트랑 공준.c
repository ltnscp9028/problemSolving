ham;drink;temp;sum;i;main(){
	for(scanf("%d",&ham);i<5;i++){
		scanf("%d",&temp);
		ham>temp ? (ham=temp) : 0;
	}
	sum += ham;
	for(i=0,scanf("%d",&drink);i<1;i++){
		scanf("%d",&temp);
		drink>temp ? (drink=temp) : 0;		
	}
	sum += drink;
	printf("%d",sum-50);
} 
