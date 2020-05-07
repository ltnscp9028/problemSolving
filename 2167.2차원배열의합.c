a;b;i;j;k;gae;p;main(){
	scanf("%d %d",&a,&b);
	int arr[a][b];
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	scanf("%d",&gae);
	int dpp[gae][4];
	for(i=0;i<gae;i++){
		for(j=0;j<4;j++){
			scanf("%d",&dpp[i][j]);
		}
	}
	
	
	for(k=0;k<gae;k++){	
		for(i=dpp[k][0]-1;i<dpp[k][2];i++){
			for(j=dpp[k][1]-1;j<dpp[k][3];j++){
				p += arr[i][j];
			}
		}
		printf("%d\n",p);
		p=0;
	}
} 
