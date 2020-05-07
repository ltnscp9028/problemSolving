temp;j;i;people[1000000];meet[1000000];a;y;time[1000000];main(){
	scanf("%d %d",&a,&y);
	for(i=0;i<a;i++)
		scanf("%d %d %d ",&people[i],&meet[i],&time[i]);	
 	for(j=0;j<b;j++){
	for(i=0;i<b-j-1;i++){
		if(time[i] > time[i+1]){
			temp = time[i+1];
			time[i+1] = time[i];
			time[i] = temp;
			
			temp = people[i+1];
			people[i+1] = people[i];
			people[i] = temp;
			
			
		}	
}

