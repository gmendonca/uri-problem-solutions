#include <iostream>
#include <stdio.h>

int main(){
    int l;
    char t;
    double N[12][12];
    double soma = 0.0;
    
    std::cin >> l;
    std::cin >> t;    
    
    for(int i = 0; i < 12; i++){
            for(int j = 0; j < 12; j++){
                   std::cin >> N[i][j];
                   if(j == l){
                        soma += N[i][j];
                   }
            }
   }
   
   if(t == 'S')
         printf("%.1f\n", soma);
    else
         printf("%.1f\n", soma/12.0);
    return 0;
}
