#include <stdio.h>
#include <iostream>

int main(){

    int n, danca;
    char texto[50];
    
    while(std::cin.getline(texto,50)){
        danca = 0;
        for(int j = 0; j < 50; j++){
            if(texto[j] == '\0') break;
            if(danca == 0){
                     if(texto[j] >= 97){
                                  printf("%c",texto[j]-32);
                                  danca = 1;
                     }
                     else if(texto[j] == 32){
                           printf("%c",texto[j]);
                     }
                     else{
                           printf("%c",texto[j]);
                           danca = 1;
                     }
            }else{
                  if(texto[j] >= 97){
                               printf("%c",texto[j]);
                               danca = 0;
                  }
                  else if(texto[j] == 32){
                        printf("%c",texto[j]);
                  }
                  else{
                        printf("%c",texto[j] + 32);
                        danca = 0;
                  }
            }
         }
         printf("\n");
    }
    
    return 0;
}
