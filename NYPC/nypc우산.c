arr[15],mv[205],n,m,b,check,cnt,i;main(){
   scanf("%d %d %d",&n,&m,&b);
   scanf("%d %d",&mv[0],&check);
   if(check==1){
      ++cnt;
      ++arr[mv[0]];
   }
   for(i=1;i<m;i++){
      scanf("%d %d",&mv[i],&check);
      if(check==0)continue;
      else if(check==1 && arr[mv[i-1]]==0){
         ++cnt;
         ++arr[mv[i]];
      }	
      else if(check==1&&arr[mv[i-1]]!=0){
         --arr[mv[i-1]];
         ++arr[mv[i]];
      }
   }
   printf("%d",cnt);
}
