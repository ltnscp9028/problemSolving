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

/* find(x): ��� �̿� */
int find(int x) {//O(log N)
  if (root[x] == x) {
      return x;
  } else {
      // "��� ����(Path Compression)"
      // find �ϸ鼭 ���� ��� ���� �θ� ��带 root�� �����.
      return root[x] = find(root[x]);
  }
}

 void merge(int x, int y){
   x = find(x);
   y = find(y);

   // �� ���� root�� ������(�̹� ���� Ʈ��) ��ġ�� �ʴ´�.
   if(x == y)
     return;

   // "union-by-rank ����ȭ"
   // �׻� ���̰� �� ���� Ʈ���� ���̰� ���� Ʈ�� �ؿ� �ִ´�. ��, ���̰� �� ���� ���� root�� ����
   
   if(ran[x] < ran[y]) {
     root[x] = y; // x�� root�� y�� ����
   } else {
     root[y] = x; // y�� root�� x�� ����

     if(ran[x] == ran[y])
       ran[x]++; // ���� ���̰� ���ٸ� ��ģ �� (x�� ���� + 1)
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
	
	ml = max_element(gg,gg+n)-gg; //gg�迭�� �ִ��� ù��° �ε��� O(n)
	
	 
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
	//gg[i] -> i��带 �θ�� �������ִ� ������ ���� 		
}

/*
5 4
1 3
3 1
2 4
4 2
*/


