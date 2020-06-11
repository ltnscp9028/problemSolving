#include<iostream>
#include<algorithm>
using namespace std;
int h=-1,m=-1,n;
int main(){
	cin>>h>>m>>n;
	if(h<0||h>23||m<0||m>59){
		puts("입력오류");
	}
	m+=n;
	h += m/60;
	m = m%60;
	h = h>24 ? h-24 : h;
	cout<<h<<' '<<m;
}
