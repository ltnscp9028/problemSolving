#include <bits/stdc++.h>
using namespace std;
int arr[11],i,p,q,r,ans,c,ln,pr;
int check(int n) {
    if (!n)return !arr[0];
    int len = 0;
    while (n>0){
        if (arr[n % 10]) return 0;
        n /= 10;
        len++;
    }
    return len;
}
main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for (cin>>p>>q;i<q;arr[r]=1,i++)cin>>r;
    for (ans = abs(p-100),i=0;i<10000001;i++){
        c=i;
        ln=check(c);
        if (ln>0){
            pr=abs(c-p);
            if(ans>pr+ln){
                ans=pr+ln;
            }
        }
    }
    cout << ans;
}