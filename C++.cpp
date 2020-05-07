#include<bits/stdc++.h>
using namespace std;
struct add_op{
	int str;
	int dex;
	int tni;
	int luk;
	int max_hp;
	int max_mp;
	int ph_dam;
	int mag_dam;
	int defense;
	int jump;
	int all_st;
};

int i,lv,
	single[8],multi[8], 
	chu;main(){
	cin>>lv;
	//lv/20 + 1 , lv/40 + 1
	for(i=1;i<8;i++){
		single[i] = (lv/20 + 1) * (8-i);
		multi[i] = (lv/40 + 1) * (8-i);
	}
	
	for(i=1;i<6;i++){
		printf("%d ",single[i]);
	}
	
	puts("");//testCode
	
	for(i=1;i<6;i++){
		printf("%d ",multi[i]);
	}

}

//1~4 , 2~5 (È¯»ýÀÇ ºÒ²É) 
//50 -> 25 +25 or 30 + 20 or  

//Èû 50, µ¦ 25, ÀÎ 55 ,·° 65
/*
	·° : 45 + 20 
	µ¦ : 25 
	Èû : 20 + 30 
	¾È : 30 + 25
*/

