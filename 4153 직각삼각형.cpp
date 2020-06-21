#include<bits/stdc++.h>
using namespace std;
int a[3];
int main(){
	for(;scanf("%d %d %d",a,a+1,a+2),a[0];puts(a[2]*a[2]==a[1]*a[1]+a[0]*a[0]?"right":"wrong"))sort(a,a+3);
}
