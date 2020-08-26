#include<iostream>
long n,i;
int main(){
	for(std::cin>>n;n>=0;n-=++i);
	std::cout<<i-1;
}
