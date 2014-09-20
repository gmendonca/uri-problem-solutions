#include <string.h>
#include <stdio.h>
#include <sstream>
#include <math.h>

void reverse(char word[])
{
    int len=strlen(word);
    char temp;
    for (int i=0;i<len/2;i++)
    {
            temp=word[i];
            word[i]=word[len-i-1];
            word[len-i-1]=temp;
    }
}

int main(){
    char tipo[3];
    char numero[32];
    std::string num;
    int n;
    int cont;
    int dec;
    
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
            scanf("%s %s", &numero, &tipo);
            
            if(!strcmp(tipo, "bin")){
                    printf("Case %d:\n", i+1);
                    cont = 0;
                    dec = 0;
                    reverse(numero);
                    while(true){
                                if(numero[cont] == '\0') break;
                                dec += (numero[cont] - 48)*pow(2,cont);
                                cont++;
                    }
                    printf("%d dec\n",dec);
                    printf("%x hex\n\n",dec);
                    
            } else if(!strcmp(tipo, "dec")){
                   
                   printf("Case %d:\n", i+1);
                   cont = 0;
                   dec = 0;
                   
                   std::stringstream f(numero);
                   f >> dec;
                   
                   char bin[50];
                   cont = 0;
                   
                   printf("%x hex\n",dec);
                   while(dec/2 != 0){ bin[cont] = dec%2+48;  dec /= 2; cont++; }
                   bin[cont] = dec%2+48;
                   for(int l = cont; l >= 0; l--){ printf("%c", bin[l]); }
                   printf(" bin\n\n");
                   
            } else if(!strcmp(tipo, "hex")){
                   printf("Case %d:\n", i+1);
                   cont = 0;
                   dec = 0;
                   reverse(numero);
                   while(true){
                               if(numero[cont] == '\0') break;
                               if(numero[cont] >= 97){
                                            dec += (numero[cont] - 87)*pow(16,cont);
                               }else{
                               dec += (numero[cont] - 48)*pow(16,cont);
                               }
                               cont++;
                   }
                   
                   
                   char hex[50];
                   cont = 0;
                   printf("%d dec\n",dec);
                   while(dec/2 != 0){                 
                             hex[cont] = dec%2+48;
                             dec /= 2;
                             cont++;
                   }
                   hex[cont] = dec%2+48;
                   for(int k = cont; k >= 0; k--){ printf("%c", hex[k]); }
                   printf(" bin\n\n");
            }
    }
    
    return 0;
}
