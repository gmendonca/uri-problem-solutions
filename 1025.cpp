#include <stdio.h>
#include <stdlib.h>

int ascending(void const *a, void const *b )
{
    return (*(int*)a - *(int*)b );
}

int achar(int ac[], int len, int comp)
{
    for(int k = 0; k < len; k++){
            if(ac[k] == comp){
                     return k+1;
            }
}
    return 0;
}

int main(){
    int n,f,q,j,l;
    n = 0;    
    for(;;){
            scanf("%d", &f);
            scanf("%d", &q);
            if(f == 0 && q == 0) break;
            int vet[f+1];
            
            for(j = 0; j < f; j++){
                scanf("%d",&vet[j]);
            }
            
            qsort(vet, f, sizeof(int), ascending);
            
            printf("CASE# %d:\n",n+1);
            for(j = 0; j < q; j++){
                scanf("%d",&l);
                
                int m = achar(vet,f,l);
                
                if(m != 0) printf("%d found at %d\n",l,m);
                else printf("%d not found\n",l);
            }
            n++;  
    }
    return 0;
}
