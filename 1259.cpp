#include <stdio.h>
#include <stdlib.h>

int ascending(void const *a, void const *b )
{
    return (*(int*)a - *(int*)b );
}

int descending(void const *a, void const *b )
{
    return (*(int*)b - *(int*)a );
}

int main(){
    int n, i, num, par, impar;
    
    scanf("%d", &n);
    par = 0;
    impar = 0;
    int np[n];
    int ni[n];
    
    for(i = 0; i < n; i++){
        scanf("%d", &num);
        if(num%2 == 0){
            np[par] = num;
            par++;
        }else{
            ni[impar] = num;
            impar++;
        }
    }
    qsort(np, par, sizeof(int), ascending);
    qsort(ni, impar, sizeof(int), descending);
    for(i = 0; i < par; i++){
        printf("%d\n",np[i]);
    }
    for(i = 0; i < impar; i++){
        printf("%d\n",ni[i]);
    }
    
    return 0;
}
