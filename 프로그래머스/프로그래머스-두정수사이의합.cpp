#include<bits/stdc++.h>
using namespace std;
long long answer;
long long solution(int a, int b) {
    for(a>b ? a^=b^=a^=b : 0;a<=b;answer+=a++);
    return answer;
}