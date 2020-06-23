#include<bits/stdc++.h>
using namespace std;
int n,m;
int main(){
    cin>>n>>m;
    m<45 ? m+=15 , --n<0 ? n=23 : 0 :  m-=45;
    printf("%d %d ",n,m);
}