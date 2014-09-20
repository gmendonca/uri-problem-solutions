#include <stdio.h>

int main(){
    int n, j, esq, dir;
    char linha[1001];
    
    scanf("%d",&n);
    
    for(int i = 0; i < n; i++){
            scanf("%s",&linha);
            dir = 0;
            j = 0;
            esq = 0;
            dir = 0;
            while(true){
                        if(linha[j] == '\0') break;
                        if(linha[j] == '<') esq++;
                        if(linha[j] == '>'){
                                    if(esq > 0){
                                           dir++;
                                           esq--;
                                    }
                        }
                        j++;
            }
            printf("%d\n", dir);
    }
    return 0;
}
