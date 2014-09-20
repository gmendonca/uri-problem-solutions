#include <iostream>
#include <stdio.h>

int main(){
    
    int a;
    float b;
    
    std::cin >> a;
    std::cin >> b;
    
    printf("%.3f km/l\n", a/b);
    return 0;
}
