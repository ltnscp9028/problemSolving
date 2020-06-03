#include <bits/stdc++.h>
using namespace std;
int i,j,k,cnt;
vector<int>c;
int solution(vector<vector<int> > board, vector<int> moves) {
    int answer = 0;
    int tmp = moves.size();
    int n = board.size();
    for(i=0;i<tmp;i++){
        for(j=0;j<n;j++){
            if(board[j][moves[i]-1]){
                k = board[j][moves[i]-1];
                if(i!=0 && k==c[c.size()-1]){
                    answer +=2;
                    c.pop_back();
                    board[j][moves[i]-1]=0;
                    break;
                }
                c.push_back(k);
                board[j][moves[i]-1]=0;
                break;
            }
        }
    }
    return answer;
}