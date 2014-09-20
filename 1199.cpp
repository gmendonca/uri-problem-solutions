#include <stdio.h>
#include <sstream>
#include <math.h>
#include <string.h>
#include <iostream>

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
    int i;
    char numero[100];
    long long dec = 0;
    long double d = 0;
    
    while(true){
                scanf("%s",&numero);
                i = 0;
                if(numero[0] == 45) break;
                else if(numero[1] == 120){
                     reverse(numero);
                     while(true){
                               if(numero[i] == 'x') break;
                               if(numero[i] >= 65 && numero[i] < 97){
                                            d += (numero[i] - 55)*pow(16,i);
                               }else if(numero[i] >= 97){
                                     d += (numero[i] - 87)*pow(16,i);
                               }else{
                               d += (numero[i] - 48)*pow(16,i);
                               }
                               i++;
                     }
                     std::cout << (int)d << "\n";
                     d = 0;
                     } else{
                       std::stringstream f(numero);
                       f >> dec;
                       if(dec >= 2147483647) dec = 2147483647;
                       
                       i = 0;
                       
                       char hex[50];
                       
                       while(dec/16 != 0){
                                    if(dec%16 >= 10){
                                              hex[i] = dec%16+55;
                                              dec /= 16;
                                              i++;
                                    }
                                    else{
                                         hex[i] = dec%16+48;
                                         dec /= 16;
                                         i++;
                                    }
                       }
                       if(dec%16 >= 10) hex[i] = dec%16+55;
                       else hex[i] = dec%16+48;
                       printf("0x");
                       for(int k = i; k >= 0; k--){ printf("%c", hex[k]); }
                       printf("\n");
                       }
    }
    return 0;
}
