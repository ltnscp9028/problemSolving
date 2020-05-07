#include <bits/stdc++.h>
using namespace std;
const int p=300020;
int N,M,i,j;
long long A[p],X[p],B[p],Y[p],a,b,s;
main()
{
    for(cin>>N;++i<=N;)cin>>A[i]>>X[i];
    cin>>M;
    for(i=0;++i<=M;Y[i]+=Y[i-1])cin>>B[i]>>Y[i];
    cin>>a>>b;
    for(i=0;++i<=N;)s+=X[i]*(Y[upper_bound(B,B+M+1,A[i]+b)-B-1]-Y[lower_bound(B,B+M+1,A[i]+a)-B-1]);
	cout<<ans;
}
