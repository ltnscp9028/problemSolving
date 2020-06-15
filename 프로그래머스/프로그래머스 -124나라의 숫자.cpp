#include<bits/stdc++.h>
using namespace std;
string answer;
string solution(int n) {
    for(;n;n = n%3 ? n/3 : n/3 -1)
        answer.insert(0,n%3 ? to_string(n%3) : to_string(4));
    return answer;
}