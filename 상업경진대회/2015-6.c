i,j,k,x,y,z,cnt;main(){
	scanf("%d %d %d",&x,&y,&z);
	if(x<2||y<2||z<2||x>120||y>120||z>120 || x==0 || y==0 || z==0){
		puts("입력 오류");
		return -1;
	}
	for(i=1;i<=z;i++){
		if(i==1||i==z){
			cnt += (x-2)*2 + (y-2)*2;
		}
		else{
			cnt += 4;
		}
	}
	printf("%d",cnt);
}

