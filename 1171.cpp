#include <stdio.h>
#include <stdlib.h>

int ascending(void const *a, void const *b )
{
    return (*(int*)a - *(int*)b );
}

int main(){
    int n,i, comp, cont;
    scanf("%d",&n);
    int num[n];
    
    for(i = 0; i < n; i++){
          scanf("%d",&num[i]);
    }
    
    qsort(num, n, sizeof(int), ascending);
    comp = num[0];
    i = 1;
    cont = 1;
    while(1){
             if(i == n+1) break;
             if(num[i] == comp){
                       cont++;
                       i++;
             }else{
                   printf("%d aparece %d vez(es)\n", comp, cont);
                   comp = num[i];
                   cont = 0;
             }
    }
    return 0;
}
