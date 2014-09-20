#include <stdio.h>
#include <stdlib.h>

struct time{
       int numero;
       int pontos;
       int marcados;
       int tomados;
};

int ordem(const void *a, const void *b)
{
    struct time *ia = (struct time *)a; 
    struct time *ib = (struct time *)b;
    if(ib->pontos != ia->pontos)
        return ib->pontos - ia->pontos;
    if(ib->tomados == 0) ib->tomados = 1;
    if(ia->tomados == 0) ia->tomados = 1;
    if((float)ib->marcados/(float)ib->tomados != (float)ia->marcados/(float)ia->tomados){
        if((float)ib->marcados/(float)ib->tomados - (float)ia->marcados/(float)ia->tomados > 0)
            return 1;
        else
            return -1;
    }
    if(ib->marcados != ia->marcados)
        return ib->marcados - ia->marcados;
    return ib->numero - ia->numero;
    
}

int main(){
    int n, i, p, x, y, z, w;
    int h = 0;
    
    while(1){
        scanf("%d", &n);
        if(n == 0) break;
        if(h != 0) printf("\n");
        h++;
        struct time array[n];
        p = n*(n-1)/2;
        for(i = 0; i < n; i++){
              array[i].numero = 0;
              array[i].pontos = 0;
              array[i].marcados = 0;
              array[i].tomados = 0;
        }
        for(i = 0; i < p; i++){
             scanf("%d %d %d %d", &x, &y, &z, &w);
             if(array[x-1].numero == 0) array[x-1].numero = x;
             if(array[z-1].numero == 0) array[z-1].numero = z;
                  array[x-1].marcados += y;
                  array[x-1].tomados += w;
                  array[z-1].marcados += w;
                  array[z-1].tomados += y;
             if(y - w > 0){
                  array[x-1].pontos += 2;
                  array[z-1].pontos += 1;
             }else{
                   array[z-1].pontos += 2;
                   array[x-1].pontos += 1;
             }
        }
        qsort(array,n,sizeof(time),ordem);
        printf("Instancia %d\n",h);
        for(i = 0; i < n; i++){
              printf("%d",array[i].numero);
              printf(" ");
        }
        printf("\n");
                      
    }
    return 0;
}
