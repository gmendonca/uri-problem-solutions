#include <iostream>
#include <math.h>

int main(){
    int n, p;
    
    int cont;
    
    std::cin >> n;
    for(int i = 0; i < n; i++){
            std::cin >> p;
            
            cont = 0;
            for(int i = 1; i < sqrt(p); i++){
                    if(p%i == 0) cont++;
                    if(cont > 1) break;
            }
            
            if(cont == 1) std::cout << p << " eh primo\n";
            else std::cout << p << " nao eh primo\n";
    }
    return 0;
}
