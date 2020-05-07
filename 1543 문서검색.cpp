#include<bits/stdc++.h>
using namespace std;
char a[2502],che[52];
int i,m,c,cnt;
main()
{
   cin.getline(a,2502);
   cin.getline(che,52);
   
   m=strlen(a);
   c=strlen(che);
   for(i=0;i<m;i++)
   {   
      if(!strncmp(a+i,che,c))
      {
         cnt++;
         i+=c-1;
      }
   }
   printf("%d",cnt);
}
