#include<bits/stdc++.h>
using namespace std;
int n,m;
int q,w,cnt,temp,ml;
vector<pair<int,int> >v;
vector<int>rcp;
const int MAX_SIZE = 200001;
int root[MAX_SIZE];
int ran[MAX_SIZE];
int gg[MAX_SIZE];

/* find(x): 재귀 이용 */
int find(int x) {//O(log N)
  if (root[x] == x) {
      return x;
  } else {
      // "경로 압축(Path Compression)"
      // find 하면서 만난 모든 값의 부모 노드를 root로 만든다.
      return root[x] = find(root[x]);
  }
}

 void merge(int x, int y){
   x = find(x);
   y = find(y);

   // 두 값의 root가 같으면(이미 같은 트리) 합치지 않는다.
   if(x == y)
     return;

   // "union-by-rank 최적화"
   // 항상 높이가 더 낮은 트리를 높이가 높은 트리 밑에 넣는다. 즉, 높이가 더 높은 쪽을 root로 삼음
   
   if(ran[x] < ran[y]) {
     root[x] = y; // x의 root를 y로 변경
   } else {
     root[y] = x; // y의 root를 x로 변경

     if(ran[x] == ran[y])
       ran[x]++; // 만약 높이가 같다면 합친 후 (x의 높이 + 1)
   }
}

main(){
	scanf("%d %d",&n,&m);
	
	v.resize(n+1);

	for (int i = 0; i < n; i++)root[i] = i; //O(n) 

	
	for(int i=0;i<m;i++){//O(n)
		scanf("%d %d",&q,&w);
		v[q].first++;
		v[w].second++;
		merge(q,w);
	}
	
	for(int i=1;i<=n;i++){//O(n)
		gg[find(i)]++;
	}
	
	ml = max_element(gg,gg+n)-gg; //gg배열의 최댓값의 첫번째 인덱스 O(n)
	
	 
	for(int i=ml;i<=n;i++){//O(n)
		if(gg[ml]==gg[i])rcp.push_back(i);
		
	} 

	pair<int,int>wiol = {0,0};
	int index;
	int winner=987654321;
	
	for(int i=0;i<rcp.size();i++){
		
		for(int j=1;j<=n;j++){
			if(rcp[i]==find(j)){
				
				if(wiol.first<v[j].first)
				{
					wiol = {v[j].first,v[j].second};
					index = j;
				}
					
				 
				else if(wiol.first==v[j].first && wiol.second > v[j].second)
				{
					wiol = {v[j].first,v[j].second};
					index = j;
				}
				else if(wiol.first==v[j].first && wiol.second == v[j].second);
//				cout<<index<<'\n';
			}	
		}
		winner = min(winner,index);
	}
	cout<<winner;
	/*for(int i=0;i<rcp.size();i++)cout<<rcp[i]<<' ';
	puts("");
	
	for(int i=1;i<=n;i++)cout<<gg[i]<<' ';*/
	//gg[i] -> i노드를 부모로 가지고있는 원소의 개수 		
}

/*
5 4
1 3
3 1
2 4
4 2
*/


