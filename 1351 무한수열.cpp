#define ll long long 
#include <bits/stdc++.h>
using namespace std;
ll N, P, Q;
map < ll, ll > m;
ll dp(ll x) {
    if (!x)
        return 1;
    if (m[x])
        return m[x];
    return m[x] = dp(x / P) + dp(x / Q);
}
int main() {    
    scanf("%lld%lld%lld", &N, &P, &Q);
    printf("%lld\n", dp(N));
    return 0;
}
