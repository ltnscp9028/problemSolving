a;b;main(i){
char c[11]="¸ð°É°ÔµµÀ·";
	for(;~scanf("%1d",&a);++i){
		b+= a?2:0;
		i%4?0:(printf("%c%c",c[b],c[b+1]),b=0);
	}
}
