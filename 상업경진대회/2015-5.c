char arr[9];
v[9],n,z,i,idx,tmp;main(){
	scanf("%d",&n);
	itoa(n,arr,10);
	for(i=0;arr[i];i++);
	z=i;
	if(z<5 || z>9){
		puts("입력 오류");
		return -1; 
	}
	for(;;){
		for(i=0;i<z;i++){
			idx = (idx + (int)arr[i]-48) % z;
			v[idx]++;
		}
		for(i=0;i<z;i++){
			if(v[i]==0 || v[i]>1 && idx==0){
				n+=1;
				itoa(n,arr,10);
			}
			else{
				printf("%d",n);
				return;
			}
		}
	}
	
}
