#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std; 
char tmp[1001000], tmp2[2002000], str[4004000];
int len,p[4001000];

void peven(string st) {
    int n = st.length();
	int r = -1, k = -1;
 
    for (int i=0; i<n; i++) {
        if (i<=r) p[i] = min(r-i, p[2*k-i]);
        for(;i-p[i]-1>=0 && i+p[i]+1<n && st[i-p[i]-1] == st[i+p[i]+1] && st[i] == '#';)p[i]++;
        if (r < i+p[i]) r = i+p[i], k = i;
    }
}

void podd(string s) {
    int n = s.length();
	int r = -1, k = -1;
 
    for (int i=0; i<n; i++) {
        if (i<=r) p[i] = min(r-i, p[2*k-i]);
        for(;i-p[i]-1>=0 && i+p[i]+1<n && s[i-p[i]-1] == s[i+p[i]+1];)p[i]++;
        if (r < i+p[i]) r = i+p[i], k = i;
    }
}

main() {
   scanf("%s", tmp);
    len = strlen(tmp);
    if (!(len % 2)) {
       for (int i = 0; i < len; i++) {
           tmp2[2*i] = '#';
           tmp2[2*i+1] = tmp[i];
       }
       strcpy(str, tmp2);
       strcpy(str + strlen(str), tmp2);
      *(str + strlen(str)) = '#';
      peven(str);
      int cnt = 0,n = strlen(str);
      for (int i = 0; i + len + 1 < n; i++)
         if (p[i] >= len) cnt++;
      cout<<cnt;
   }
   else {
      strcpy(str, tmp);
       strcpy(str + strlen(str), tmp);
       podd(str);
       int cnt = 0,n = strlen(str);
       for (int i = 0; i + len/2 + 1 < n; i++)
         if (p[i]*2+1 >= len) cnt++;
      std::cout<<cnt;
   }
}
