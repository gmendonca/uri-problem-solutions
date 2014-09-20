#include <iostream>

int main(){
    int x, y, aux;
    int soma = 0;
    
    std::cin >> x;
    std::cin >> y;
    
    if(x > y){
         aux = x;
         x = y;
         y = aux;
    }
    
    for(int i = x+1; i < y; i++){
            if(i%2 != 0){
                   soma += i;
            }
    }
    
    std::cout << soma << "\n";
    return 0;
}
