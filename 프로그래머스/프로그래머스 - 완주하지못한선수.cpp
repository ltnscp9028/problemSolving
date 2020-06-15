#include<bits/stdc++.h>
using namespace std;
int i;
string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    sort(participant.begin(),participant.end());
    sort(completion.begin(),completion.end());
    for(;;i++)
        if(completion[i]!=participant[i])return participant[i];

}