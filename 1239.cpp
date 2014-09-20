#include <iostream>
#include <stdio.h>

int main(){
    int negrito, italico, i;
    char texto[100];
    while(std::cin.getline(texto,100)){
                i = 0;
                negrito = 0;
                italico = 0;
     while(texto[i] != '\0'){
                if(texto[i] == '*'){
                        if(negrito == 0){
                                    printf("<b>");
                                    negrito = 1;
                        }
                        else {
                             printf("</b>");
                             negrito = 0;
                        }
                }else if(texto[i] == '_'){
                        if(italico == 0){
                                    printf("<i>");
                                    italico = 1;
                        }
                        else {
                             printf("</i>");
                             italico = 0;
                        }
                }else{
                      printf("%c", texto[i]);
                }
                i++;
     }
     printf("\n");
    }
    
    return 0;
}
