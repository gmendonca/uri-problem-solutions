#include <stdio.h>

int main(){
    
    int n, numero, zero, soma, inicio, postes;
    
    while(true){
                scanf("%d",&n);
                if(n == 0) break;
                zero = 0;
                soma = 0;
                inicio = 0;
                postes = 0;
                for(int i = 0; i < n; i++){
                        scanf("%d", &numero);
                        if(numero == 0 && inicio == 0){
                                  zero++;
                                  postes++;
                        }
                        else if(numero == 0 && inicio == 1){
                                   postes++;
                        }if(numero == 1){
                                   inicio = 1;
                                   soma += postes/2;
                                   postes = 0;
                        }
                }
                if(postes > 0){
                          soma -= zero/2;
                          postes += zero;
                          soma += postes/2;
                }
                printf("%d\n", soma);
    }
    return 0;
}
