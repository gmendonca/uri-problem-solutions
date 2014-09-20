#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int a;
    int soma = 0;
    float cont = 0.0;
    
    while(cin >> a){
              if(a < 0) break;
              soma += a;
              cont += 1.0;
    }
    
    printf("%.2f\n", soma/cont);
    return 0;
}
