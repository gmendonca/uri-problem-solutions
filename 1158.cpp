#include <iostream>

int main(){
    int n, x, y,soma;
    
    std::cin >> n;
    
    for(int i = 0; i < n; i++){
            std::cin >> x;
            std::cin >> y;
            
            soma = 0;
            
            if(x%2 != 0){
                   soma+=x;
            }else{
                   x+=1;
                   soma += x;
            }
            
            for(int i=0; i < y-1; i++){
                    x += 2; 
                    soma += x;           
            }
            
            std::cout << soma << "\n";
    }
    return 0;
}
