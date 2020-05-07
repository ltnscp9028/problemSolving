int main(){
	ch,gap,i,j,temp,temps = 0;
	stam[1001] = {0};
	exp[1001] = {0};
	scanf("%d",&ch);
	scanf("%d",&gap);
	for(i=1;i<=gap;i++){
		scanf("%d %d",&stam[i],&exp[i]);	
	}
	for(j=1;j<=gap;j++){
		for(i=1;i<=gap-j-1;i++){
			if(exp[i] > exp[i+1]){
				temp = exp[i+1];
				exp[i+1] = exp[i];
				exp[i] = temp;
				temps = stam[i+1];
				stam[i+1] = stam[i];
				stam[i] = temps;
				}
			}
		}
	prinft("%d",stam[0]);
	return 0;
}
	
	
