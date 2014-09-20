#include <iostream>

int main(){
    int x, soma;
    
    while(true){
                std::cin >> x;
                if(x == 0) break;
                
                soma = 0;
                
                if(x%2 == 0) soma += x;
                else soma += ++x;
                
                for(int i = 0; i < 4; i++){
                        x += 2;
                        soma += x;
                }
                std::cout << soma << "\n";
    }
    return 0;
}
