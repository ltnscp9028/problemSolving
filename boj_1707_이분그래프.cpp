#include <bits/stdc++.h>
using namespace std;

vector<int> a[20001];
int check[20001];
int ans=1,k,v,e,i,x,y;

int dfs(int n, int g) {
    check[n] = g;
    for (int i=0; i<a[n].size(); i++) {
        int next = a[n][i];
        if (!check[next]){
        	if(!dfs(next, -g))return 0;
		}
		else if (check[next] == check[n])return 0;
	}
    return 1;
}

 main() {
    int k, v, e;
    scanf("%d", &k);
    while (k--) {
        scanf("%d %d", &v, &e);
        for (int i=1; i<=v; i++) {
            // Initialize
            a[i].clear();
            check[i] = 0;
        }
        int x, y;
        for (int i=0; i<e; i++) {
            scanf("%d %d", &x, &y);
            a[x].push_back(y);
            a[y].push_back(x);
        }
        bool ans = true;
        for (int i=1; i<=v; i++) {
            if (check[i] == 0) {
                if (!dfs(i, 1)) {
                    ans = false;
                    break;
                }
            }
        }
        printf("%s\n", ans ? "YES" : "NO");
    }
    return 0;
}

//main() {
//    for(cin>>k;k--;){
//    	cin>>v>>e;
//    	for(i=0;++i<=v;check[i]=0)a[i].clear();
//    	for(i=0;i<e;a[x].push_back(y),a[y].push_back(x),i++)cin>>x>>y;
//    	for(i=0;++i<=v;)
//    		if(!check[i])
//    			if(!dfs(i,1)){
//    				ans=0;
//    				break;
//				}
//		cout<<ans? "YES":"NO"<<'\n';
//	}
//}
