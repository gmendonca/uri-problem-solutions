#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct palavra{
       int len;
       int pos;
       char *p;
};

int compare(const void * a, const void * b){
    struct palavra *pa = (struct palavra *)a; 
    struct palavra *pb = (struct palavra *)b;
    
    if(pb->len == pa->len) return pa->pos - pb->pos;
    return pb->len - pa->len;
}

int main(){
    int n, i, cont, j, k;
    char linha[2600];
    char *pch;
    
    scanf("%d%*c", &n);
    
    for(i = 0; i < n; i++){
          gets(linha);
          cont = 0;
          struct palavra array[51];
          pch = strtok (linha," ");
          while (pch != NULL){
                array[cont].p = pch;
                array[cont].len = strlen(pch);
                array[cont].pos = cont; 
                cont++;
                pch = strtok (NULL, " ");
          }
          qsort(array, cont, sizeof(palavra), compare);
          for(j = 0; j < cont; j++){
                if(j == cont-1) printf("%s\n", array[j].p);
                else printf("%s ", array[j].p);
          }
    }
    
    return 0;
}
