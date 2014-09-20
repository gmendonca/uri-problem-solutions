#include <stdio.h>
int coral(int cor[], int s, int l){
    if(s%l != 0) return -1;
    
    int maior = 0;
    s = s/l;
    for(int i = 0; i < l; i++){
            if(cor[i] > s)
                   maior += cor[i] - s;
    }
    return maior+1;
}
int main(){
    int n, aux, soma;
    
    while(scanf("%d", &n) != EOF){
                      int vet[n];
                      aux = 0;
                      soma = 0;
                      while(aux < n){
                                scanf("%d",&vet[aux]);
                                soma += vet[aux];
                                aux++;
                      }
                      printf("%d\n",coral(vet,soma,n));
    }
    return 0;
} 
