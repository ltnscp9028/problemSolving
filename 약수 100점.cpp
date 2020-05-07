#include<iostream>
long long a,b,result;
long long fuc(long long n){
    if(n<=0)return 0;
	long long i,t,res=0,cnt;
    for(i=1;i*i<=n;i++){
    	 	t=n/i;
            res+=(n/t-n/(t+1))*t;
            if(t==n/t) continue;
            t=n/t;
            res+=(n/t-n/(t+1))*t;
    }
    return res;
    
}
int main(){
    std::cin>>a>>b;
    std::cout<<(fuc(b)-fuc(a-1));
}
