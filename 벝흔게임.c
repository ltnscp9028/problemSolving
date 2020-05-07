gcd(a,b);m,n;main(){
	scanf("%d %d",&m,&n);
	if(m==0)
		puts("IMPOSSIBLE");
	else if(m==1&&n==0)
		puts("POSSIBLE");
	else if(gcd(m,n)==1)
		puts("POSSIBLE");
	else
		puts("IMPOSSIBLE");
	}
	gcd(a,b){
	if(b==0)
	return a;
	gcd(b,a%b);
	}
	
