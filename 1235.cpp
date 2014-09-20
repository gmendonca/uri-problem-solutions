#include <stdio.h>
#include <string.h>
#include <iostream>    

int main(){
    int n, j, len;
    char linha[101];
    
    scanf("%d",&n);
    std::cin.getline(linha,0);
    for(int i = 0; i < n; i++){
            std::cin.getline(linha,101);
            len = strlen(linha);
            char primeira[len/2];
            char segunda[len/2];
            for(j = 0; j < len/2; j++){
                  primeira[j] = linha[len/2 - j - 1];
                  segunda[j] = linha[len - j - 1];
            }
            primeira[len/2] = '\0';
            segunda[len/2] = '\0';
            printf("%s%s\n",primeira,segunda);
    }
    
    return 0;
}
