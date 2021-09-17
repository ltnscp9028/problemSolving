#include<bits/stdc++.h>
using namespace std;
int n,m,i,j,t;
long long s;

int gcd(int a,int b){
	return b?gcd(b,a%b):a;
}

main(){
    for(cin>>n;n--;){
        vector<int>v;
        cin>>m;
        v.resize(m);
        for(i=0;i<m;i++)cin>>v[i];
        sort(v.begin(),v.end());
        for(s=i=0;i<m;i++)
            for(j=i+1;j<m;j++)
                s+=gcd(v[j],v[i]);
        cout<<s<<'\n';
    }
}