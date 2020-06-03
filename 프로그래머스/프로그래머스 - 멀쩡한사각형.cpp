#include<bits/stdc++.h>
using namespace std;
int t,a,b;

long solution(int w,int h) {
    for(a=w,b=h;t=b;a=t)b=a%b;
    return (long)w * h -  a * ((w/a) + (h/a) -1);
}