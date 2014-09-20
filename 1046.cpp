#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int a,b;
    
    cin >> a >> b;
    
    if(a >= b)
         printf("O JOGO DUROU %d HORA(S)\n", (24 - a) + b);
    else
        printf("O JOGO DUROU %d HORA(S)\n", b - a);
        
    return 0;
}
