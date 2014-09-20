#include <stdio.h>
#include <string.h>

struct linhas{
                char lin[51];
              };
              
int main(){
    int n, i, comp, j, c;
    int len[50];
    char linha[51];
    int flag = 0;
    
    while(1){
        scanf("%d%*c",&n);
        if(n == 0) break;
        if(flag == 1) printf("\n");
        comp = 0;
        struct linhas array[n];
        for(i = 0; i < n; i++){
            scanf("%[^\n]%*c",&array[i].lin);
            len[i] = strlen(array[i].lin);
            if(len[i] > comp) comp = len[i];
        }
        
        for(i = 0; i < n; i++){
            if(len[i] < comp){
                c = comp-len[i];
                char espaco[c];
                for(j = 0; j < c; j++) espaco[j] = ' ';
                espaco[c] = '\0';
                strcat (espaco,array[i].lin);
                printf("%s\n",espaco);
            }
            else printf("%s\n",array[i].lin);
        }
        flag = 1;
    }
    return 0;
}
        
        
