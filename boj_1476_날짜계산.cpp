#include<iostream>
int e,s,m;main(){
    for(std::cin>>e>>s>>m;(e-s)%28+(e-m)%19;e+=15);
    std::cout<<e;
}