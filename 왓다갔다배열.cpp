a[4][5],i,j,p=2;main(){
	for(;i<4;i++)
		for(j=0;j<5;j++,p+=2)a[i][i%2?4-j:j]=p;
		
	for(i=0;i<4;i++,puts(""))
		for(j=0;j<5;j++)printf("%3d",a[i][j]);
}

