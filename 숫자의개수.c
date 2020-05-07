//a;b;c;n[11];i;main(x){scanf("%d %d %d",&a,&b,&c);x=a*b*c;for(;x>0;n[x%10]++,x/=10);for(;i<10;printf("%d\n",n[i++]));}
#include <stdio.h>
int main(){
    int a,b,c,x,i;
    int num[11]={0};go
    scanf("%d %d %d",&a,&b,&c);
    x=a*b*c;
    while(x>0){
        num[x%10]++;
            x=x/10;
    }
    for(i=0;i<10;i++)
	printf("%d\n",num[i]);
}	
