char a[299];i;
main(n){
for(scanf("%d",&n),i=2*n;i--;)a[i]=32;
for(;n;++i&&(a[2*n]=42),puts(a+n--))a[2*n-1]=42;
}
