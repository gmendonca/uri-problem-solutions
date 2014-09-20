#include <stdio.h>
#include <stdlib.h>

int main (){
    int n, m, i, j, k;
    int cont, aux;
    int vagoes[50];
    scanf("%d",&n);
    for(i = 0; i < n; i++){
          scanf("%d", &m);
          cont = 0;
          for(j = 0; j < m; j++){
                scanf("%d", &vagoes[j]);
          }
          for(j = 0; j < m; j++){
                for(k = j+1; k < m; k++){
                      if ( vagoes[j] > vagoes[k] ){
                           aux = vagoes[j];
                           vagoes[j] = vagoes[k];
                           vagoes[k] = aux;
                           cont++;
                      }
                }
          }
          printf("Optimal train swapping takes %d swaps.\n", cont);
    }
    return 0;
}
