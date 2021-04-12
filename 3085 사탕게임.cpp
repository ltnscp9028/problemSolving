#include <bits/stdc++.h>
using namespace std;

int n, i, j;
char map[51][51];
int sol(){
  int r = 0;
  for (int i = 0; i < n; i++){
    int tmp = 1;
    for (int j = 1; j < n; j++){
      if (map[i][j] == map[i][j - 1])
        tmp++;
      else{
        r = max(tmp, r);
        tmp = 1;
      }
    }
    r = max(tmp, r);
  }

  for (int i = 0; i < n; i++){
    int tmp = 1;
    for (int j = 1; j < n; j++){
      if (map[j][i] == map[j - 1][i])
        tmp++;
      else{
        r = max(tmp, r);
        tmp = 1;
      }
    }
    r = max(tmp, r);
  }
  return r;
}
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int r = 0;
  cin >> n;
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      cin >> map[i][j];
  for (i = 0; i < n; i++)
    for (j = 1; j < n; j++){
      swap(map[i][j], map[i][j - 1]);
      r = max(r, sol());
      swap(map[i][j], map[i][j - 1]);
      swap(map[j][i], map[j - 1][i]);
      r = max(r, sol());
      swap(map[j][i], map[j - 1][i]);
    }
  cout << r << '\n';
}