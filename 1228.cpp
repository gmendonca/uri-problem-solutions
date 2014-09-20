#include <stdio.h>

int main(){
    int largada[24];
    int chegada[24];
    int comp[24];
    int fim, n, aux;
    
    while(scanf("%d",&n) != EOF){
                         fim = 0;
                         
                         aux = 0;
                         while(aux < n){
                                   scanf("%d", &largada[aux]);
                                   aux++;
                         }
                         aux = 0;
                         while(aux < n){
                                   scanf("%d", &chegada[aux]);
                                   aux++;
                         }
                         for(int i = 0; i < n; i++){
                                 for(int j = 0; j < n; j++){
                                         if(largada[i] == chegada[j]){
                                                       comp[j] = i + 25;
                                         }
                                 }
                         }
                         for(int k = 0; k < n; k++){
                                 for(int l = k+1; l < n; l++){
                                         if(comp[k] > comp[l]){
                                                       aux = comp[l];
                                                       comp[l] = comp[k];
                                                       comp[k] = aux;
                                                       fim++;
                                         }
                                 }
                         }
                         printf("%d\n",fim);
                         
    }
    return 0;
}
