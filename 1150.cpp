#include <iostream>

int main(){
    int x, z, soma;
    
    while(std::cin >> x){
                   std::cin >> z;
                while(z < x){ std::cin >> z; }
                soma = 0;
                for(int i = 1; true; i++){
                         soma += x;
                         x++;
                         if(soma > z){
                                 std::cout << i << "\n";
                                 break;
                         }
                }
    }
    return 0;
}
