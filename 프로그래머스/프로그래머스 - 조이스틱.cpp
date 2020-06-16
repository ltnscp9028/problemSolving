#include<bits/stdc++.h>
using namespace std;
 int answer,i,nlen;
int solution(string name) {
    int answer = 0, i = 0, nlen=name.length();
    string temp(nlen, 'A');
    for(;;){
        temp[i] = name[i];
        answer += name[i] - 'A' > 'Z' + 1 - name[i] ? 'Z' + 1 - name[i] : name[i] - 'A';
        if (temp == name)break;
        for (int move = 1; move < nlen; move++) {
            if (name[(i + move) % nlen] != temp[(i + move) % nlen]) {
                i = (i + move) % nlen;
                answer += move;
                break;
            }
            else if (name[(i + nlen - move) % nlen] != temp[(i + nlen - move) % nlen]) {
                i = (i + nlen - move) % nlen;
                answer += move;
                break;
            }
        }
    }
    return answer;
}