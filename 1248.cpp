#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>

int cmpstr(void const *a, void const *b) { 
    char const *aa = (char const *)a;
    char const *bb = (char const *)b;

    return strcmp(aa, bb);
}

int main(){
    int n, i, j;
    int flag;
    char dieta[27], cafe[27], almoco[27];
    
    
    scanf("%d%*c",&n);
    for(i = 0; i < n; i++){
        memset(dieta, 0, sizeof(dieta));
        memset(cafe, 0, sizeof(cafe));
        memset(almoco, 0, sizeof(almoco));
        flag = 0;
        std::cin.getline(dieta,27);
        std::cin.getline(cafe,27);
        std::cin.getline(almoco,27);
        strcat(cafe, almoco);
        qsort(dieta,strlen(dieta),sizeof(char),cmpstr);
        qsort(dieta,strlen(cafe),sizeof(char),cmpstr);
        for(j = 0; j < strlen(cafe); j++){
            if(!strchr(dieta,cafe[j])){
                printf("CHEATER");
                flag = 1;
                break;               
            }
        }
        for(j = 0; j < strlen(dieta); j++){
            if(flag == 1) break;
            if(!strchr(cafe,dieta[j])){
                printf("%c",dieta[j]);     
            }
        }
        printf("\n");
    }
    return 0;
}
