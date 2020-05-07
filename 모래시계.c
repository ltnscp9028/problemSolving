l;i;j;p;main(a){
   for(scanf("%d",&a),i=0;i<=a/2-1;i++,puts(""))
   {
      p=a/2;
      for(j=0;j++<i;)putchar(32);
      for(j=0;j++<a-i*2;)putchar(42);
   }
   for(i=!scanf("%d",&a);i++<a/2+1;puts(""))
   {
      p=a/2;
      for(j=0;j++<=p-i;)putchar(32);
      for(j=0;j++<i*2-1;)putchar(42);
   }
   
}
