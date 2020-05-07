#include <stdio.h>
int main() {
   int a, cnt=0, b,c, d,e,f;
   scanf("%d", &a);
   d=a;
   while(1)
   {
      
      b=d/10;
      c=d%10;
      e=b+c;
      f=e%10;
      d=c*10+f;
      cnt=cnt+1;
      if(a==d)
      {
         break;
      }
         
      
   }
   printf("%d", cnt);
}
