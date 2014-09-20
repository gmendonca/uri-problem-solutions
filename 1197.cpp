#include <stdio.h>
#include <iostream>

int main(){
    int v, t;
    
    while(std::cin >> v){
                    std::cin >> t;
                    printf("%d\n", v*(2*t));
    }
    return 0;
}
