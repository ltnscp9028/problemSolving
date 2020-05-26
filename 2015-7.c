char arr[5];
m,n,i,j,le,chk[10];main(){
	scanf("%d %d",&m,&n);
	if(m<1||n<1||m>1000||n>1000||m==0||n==0){
		puts("입력오류");
		return -1; 
	}
	for(i=m;i<=n;i++){
		itoa(i,arr,10);
		le = strlen(arr);
//		printf("%d",le);
		for(j=0;j<le;j++)chk[(int)arr[j]-48]++;
	}
	for(i=0;i<10;i++){
		printf("%d는 %d번\n",i,chk[i]);
	}
}
