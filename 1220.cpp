#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int n;
    
    int N[1000];
    
    int inteira, real;
    double valorMaior, valorMenor;
    double total;
    
    while(true){
            cin >> n;
            
            if(n == 0) break;
            
            total = 0;
            for(int i = 0; i < n; i++){
                    scanf("%d.%d", &inteira, &real);
                    N[i] = inteira *100 + real;
                    total += N[i];
            }
            
            total = ((double) total) / n;
            valorMenor = 0;
            valorMaior = 0;
            
            for(int l = 0; l < n; l++){
                    if(N[l] < total){
                            valorMenor += ((int)(total - N[l]))/100.0;
                    }
                    else{
                          valorMaior += ((int)(N[l] - total))/100.0;
                    }
            }
            printf("$%.2f\n",valorMenor);
            printf("$%.2f\n",valorMaior);
            if(valorMenor > valorMaior){
                          printf("$%.2f\n",valorMenor);
            }else{
                  printf("$%.2f\n",valorMaior);
            }
    }
    return 0;
}
