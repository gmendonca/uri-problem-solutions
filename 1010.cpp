#include <iostream>
#include <stdio.h>


int main(){
    
    int a,b,c,d;
    float e,f;
    
    std::cin >> a >> b >> e;
    std::cin >> c >> d >> f;
    
    printf("VALOR A PAGAR: R$ %.2f\n", b*e + d*f);
    return 0;
}
    
    
    
