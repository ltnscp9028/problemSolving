#include <string>
#include <bits/stdc++.h>

using namespace std;
int a[3];
vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int arr[] = {1,2,3,4,5};
    int arr2[] = {2,1,2,3,2,4,2,5};
    int arr3[] = {3,3,1,1,2,2,4,4,5,5};
    for(int i=0;i<answers.size();i++){
        arr[i%5] == answers[i] ? a[0] ++ : 0;
        arr2[i%8] == answers[i] ? a[1]++ : 0;
        arr3[i%10] == answers[i] ? a[2]++ : 0;
    }
    int tmp = max(max(a[0],a[1]),a[2]);
    for(int i=0;i<3;i++){
        if(a[i]==tmp)answer.push_back(i+1);
    }
    return answer;
}