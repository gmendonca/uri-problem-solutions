#include <stdio.h>
#include <cstring>
#include <stdlib.h>

struct palavras{
                char * p;
              };

int main(){
    char linha[50001];
    char *pch;
    int i, j, igual, ali;
    
    while(scanf("%[^\n]%*c",&linha) != EOF){
               struct palavras array[100];
               i = igual = ali = 0;
               pch = strtok (linha," ");
               while (pch != NULL)
               {
                     if(pch[0] >= 'A' && pch[0] <= 'Z') pch[0] += 32;
                     array[i].p = pch;
                     pch = strtok (NULL, " ");
                     i++;
               }
               pch = array[0].p;
               for(j = 1; j < i; j++){
                     if(array[j].p[0] == pch[0]){
                                      igual++;
                     }else{
                           if(igual >= 1){
                                    ali++;
                                    igual = 0;
                           }
                           pch = array[j].p;
                     }
               }
               if(igual >= 1) ali++;
               printf("%d\n", ali);
    }
    return 0;
}
