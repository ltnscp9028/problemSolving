#include<bits/stdc++.h>
using namespace std;
stack<char>s;
int i;

int solution(string arr) {
    int res = 0;
    for(i=0;i<arr.size();i++){
        if(arr[i]=='(')s.push('(');
        else{
            s.pop();
            if(arr[i-1]=='(')res+=s.size();
            else res++;
        }
    }
    return res;
}