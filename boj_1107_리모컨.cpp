#include <bits/stdc++.h>
using namespace std;
int arr[11],i,p,q,r,ans,c,ln,cln,pr;
int check(int n){
    if (!n)return !arr[0];
    for(;n>0;n/=10,cln++)if(arr[n%10])return 0;
    return cln;
}
main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for(cin>>p>>q;i<q;arr[r]=1,i++)cin>>r;
    for(ans=abs(p-100),i=0;i<10000001;cln=0,ln=check(c),ln>0?pr=abs(c-p),ans=ans>pr+ln?pr+ln:ans:0,i++)c=i;
    cout<<ans;
}