#include <iostream>

int main(){
    int n, aux, pos;
    
    std::cin >> n;
    
    int N[n];
    
    aux = 1000;
    pos = 0;
    
    for(int i = 0; i < n; i++){
            std::cin >> N[i];
            if(N[i] < aux){
                     aux = N[i];
                     pos = i;
            }
    }
    
    std::cout << "Menor valor: " << aux << "\n";
    std::cout << "Posicao: " << pos << "\n";    
    return 0;
}
