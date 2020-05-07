char c[81];
int i,s,t;main(){
	for(gets(&c);~scanf("%s",c);s=0){
		for(t=1,i=0;c[i];i++){
			if(c[i]==79){
				s+=t;
				t++;
			}
			else
				t=1;
		}
		
		c[i] == 79 ? s+=t,t++ : t=1;
		t = printf("%d\n",s);
	}
	
}
