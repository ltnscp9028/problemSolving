	#include <bits/stdc++.h>
	using namespace std;
	char n[100001];
	int i,cnt,s,q;
	main(){
		scanf("%s",n);
		for(q=strlen(n);i<q;i++)n[i]^48?s+=(n[i]-48):cnt++;
		sort(n,n+q);
		if(cnt==0||s%3)cout<<-1;
		else for(i=q-1;i>=0;i--)cout<<n[i];
	}
	

