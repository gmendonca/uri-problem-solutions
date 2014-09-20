#include <stdio.h>

int main(){
    int a, b, number, i, j, k, digits, qtd, flag;
    int numero[4];
    
    while(scanf("%d %d", &a, &b) == 2){
          qtd = 0;
          for(i = a; i <= b; i++){
                digits = 0;
                flag = 0;
                number = i;
                while (number != 0){
                      numero[digits] = number%10;
                      number /= 10;
                      digits++;
                }
                for(j = 0; j < digits; j++){
                      for(k = j+1; k < digits; k++){
                            if(numero[j] == numero[k]){
                                 flag = 1;
                            }
                      }
                }
                if(flag == 0) qtd++;
          }
          printf("%d\n",qtd);
    }
    
    return 0;
}
