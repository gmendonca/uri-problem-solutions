#include <iostream>
#include <stdio.h>

int main(){
    int a,b,c,d,e;
    int par = 0;
    
    std::cin >> a;
    if(a%2 == 0){
         par++;
    }
    std::cin >> b;
    if(b%2 == 0){
         par++;
    }
    std::cin >> c;
    if(c%2 == 0){
         par++;
    }
    std::cin >> d;
    if(d%2 == 0){
         par++;
    }
    std::cin >> e;
    if(e%2 == 0){
         par++;
    }
    
    printf("%d valores pares\n", par);
    return 0;
}
