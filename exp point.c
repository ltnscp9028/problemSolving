ch;gap;i;j;temp;tps;exsum;bunho;stsum;pt[1004];ptw[1004];t;stmax;ct;jung[1004]; main(){
	int count = 2;
	int stam[1001] = {0};
	int exp[1001] = {0};
	scanf("%d",&ch);
	scanf("%d",&gap);
	for(i=1;i<=gap;i++){
		scanf("%d %d",&stam[i],&exp[i]);
		jung[i] += 1;
	}
	for(j=1;j<=gap;j++){
	for(i=1;i<=gap-j-1;i++){
		if(exp[i] < exp[i+1]){
			temp = exp[i+1];
			exp[i+1] = exp[i];
			exp[i] = temp;
			
			tps = stam[i+1];
			stam[i+1] = stam[i];
			stam[i] = tps;
			
		}
	}
	}
	for(i=1;stmax<=ch;i++){
		stmax += (stam[i]);
		ct++;
		if(i>gap)
		break;
	}
	stmax = stmax-stam[i-1];
	for(i=1;i<=gap;i++){
		for(j=1;j<=gap;j++){
			if((stam[i]+stam[j])<ch && i!=j){
				if(exsum<(exp[i]+exp[j])){
					stsum = stam[i] + stam[j];
					exsum = exp[i] + exp[j];
					pt[t] = i;
					pt[t+1] = j; 	
					}
				}
			}
		}
	printf("%d\n%d\n",exsum,ct-1);
	for(i=0;pt[i]!=0;i++)
		printf("%d ",pt[i]);
}
	
