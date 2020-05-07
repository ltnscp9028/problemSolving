#include <bits/stdc++.h>
using namespace std;int an, bn,i;const int m=300020;
long long ax[m],a[m],bx[m],b[m],bs[m],s,l,r;
main()
{
    for(cin>>an;++i<=an;cin>>ax[i]>>a[i]);
    cin>>bn;
    for(i=0;++i<=bn;bs[i]=bs[i-1]+b[i])cin>>bx[i]>>b[i];
    cin>>l>>r;
    for(i=0;++i<=an;s=s+(bs[upper_bound(bx+1,bx+bn+1,ax[i]+r)-bx-1]-bs[lower_bound(bx+1,bx+bn+1,ax[i]+l)-bx-1])*a[i]);
  	cout<<s;
}
