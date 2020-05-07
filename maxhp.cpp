#include<bits/stdc++.h>
using namespace std;
int shp,t,mhp,lg,sk;main(){
	cin>>shp>>t;
	for(;t--;){
		cin>>lg>>sk;
		shp += (lg==1?-sk:sk);
		mhp = max(mhp,shp);
	}
	cout<<mhp;
	
}

/*
	1. 데미지
	2. 회복
	3. 최대생명력
	
	ex) 시작 10 + 턴 3
		 2 20 -> 회복 20 (30)
		 1 10 -> 데미지 10 (20)
		 3 40 -> 최대생명력 회복 40 (60) 
*/ 
