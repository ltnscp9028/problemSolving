#include<bits/stdc++.h>
using namespace std;
int n,cnt,i, j, tmp;
queue<int> decrease;
int main(){
    cin>>n; 
	if(n <= 10){
		cout<<n<<endl;
	}
	else if( n == 1022)
		cout<<9876543210<<endl;
	else if(n >= 1023)
		cout<<"-1"<<endl;
		
	else{
		for(i=1; i<10; i++){
			decrease.push(i);
			cnt++;
		}
		while(cnt < n ){
			i = decrease.front();
			decrease.pop();
			tmp = i%10;
			for(j = 0; j<tmp; j++){
				decrease.push(i*10+ j);
				cnt++;
				if(cnt == n){
					cout<<i*10 + j<<endl;
					break;
				}
			}
		}
	}
	return 0;
}
