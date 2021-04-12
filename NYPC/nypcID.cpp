#include<bits/stdc++.h>
using namespace std;
string s;
int t;
main(){
   regex pass("^[A-Za-z0-9\\.\\-]{1,100}@([a-zA-Z0-9\-\.]{1,100})$");
   cin>>t;
   for(;t--;){
   cin>>s;
   puts(regex_match(s,pass)?"Yes":"No");
   }
}

