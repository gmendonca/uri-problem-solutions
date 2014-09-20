#include <stdio.h>
#include <stdlib.h>

int ascending(void const *a, void const *b )
{
    return (*(int*)a - *(int*)b );
}

int encontrar(int comp, int matriz[][2],int len, int cont)
{
    int d = 0;
    int e = 0;
    for(int k = 0; k < len; k++){
            if(matriz[k][0] == comp){
                            if((char)matriz[k][1] - 68 == 0) d++;
                            if((char)matriz[k][1] - 68 == 1) e++;
            }
    }
    
    return (d > e) ? e : d;
}

int main(){
    int n;
    int num;
    char pe;
    int cont;
    int par;
    
    while(scanf("%d",&n) != EOF){
                         int numero[n+1][2];
                         int ordem[n+1];
                         for(int i = 0; i < n; i++){
                                 scanf("%d %c",&numero[i][0],&numero[i][1]);
                                 ordem[i] = numero[i][0];
                         }
                         
                         qsort(ordem, n, sizeof(int), ascending);
                         
                         cont = 0;
                         par = 0;
                         for(int j = 1; j < n; j++){
                                 if(ordem[j] == ordem[j-1]){
                                             cont++;
                                 }else if(cont > 0){
                                       int c = encontrar(ordem[j-1], numero, n, cont);
                                       cont = 0;
                                       par += c;
                                 }
                         }
                         if(cont > 0){
                                 int c = encontrar(ordem[n-1], numero, n, cont);
                                 cont = 0;
                                 par += c;
                         }
                                 
                         printf("%d\n", par);
    }
            
    return 0;
}
