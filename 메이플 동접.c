gomin[300001];gosec[300001];endmin[300001];endsec[300001];sum[1441];log
;i;j;k;u;start;end;point;pointp;
main(){
	int max = 0;
	int maxend = 0;
	scanf("%d",&log);
	for(;i<log;i++){
		scanf("%d:%d %d:%d",&gomin[i],&gosec[i],&endmin[i],&endsec[i]);
	}
	for(i=0;i<log;i++){
		start = (gomin[i]*60) + gosec[i];
		end = (endmin[i]*60) + endsec[i];
			for(j=start;j<end;j++){
				sum[j]++;
			}
		}
			for(k=0;k<=1440;k++){
				if(max<sum[k]){
					max = sum[k];
					point = k;	
				}		
			}
			for(u=point;sum[point]==sum[u];u++);
	printf("\n\n%d\n\n%d\n\n",point,u);
	printf("%d\n%02d:%02d %02d:%02d",max,point/60,point%60,u/60,u%60);
}

