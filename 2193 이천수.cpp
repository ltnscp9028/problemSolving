long long f,r=1;main(){
   for(scanf("%d",&a);a--;)
      r+=f,f=r-f;
   printf("%lld",r);
}
