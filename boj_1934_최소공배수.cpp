#include<bits/stdc++.h>
using namespace std;
int p,q,n;
a
int gcd(int a,int b){
	return b?gcd(b,a%b):a;
}

main(){
    for(cin>>n;n--;){
        cin>>p>>q;
        p>q ? p^=q^=p^=q : 0;
        cout << p*q / gcd(p,q) << '\n';
    }
}
