#include<bits/stdc++.h>
using namespace std;
string s;
main(){
   regex pass("^(?=.*[a-z])(?=.*[A-Z])(?=.*[0-9])(?=.*[\\[\\]\`~!@#\\$%\\^&\\*()=\\+_{}<>;:\\|\\'\"\\-\\?,\\.\\\\])[A-Za-z0-9\\[\\]\`~!@#\\$%\\^&\\*()=\\+_{}<>;:\\|\\'\"\\-\\?,\\.\\\\]{8,15}");
         
   cin>>s;
   cout<<(regex_match(s,pass)?"valid":"invalid");
   }

