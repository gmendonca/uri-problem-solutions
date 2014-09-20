#include <stdio.h>

int main(){
    int p, i, proc, clock;
    char linha[51];
    
    while(scanf("%[^\n]%*c",&linha) != EOF){
             scanf("%d%*c",&p);
             proc = clock = 0;
             for(i = 0; linha[i] != '\0'; i++){
                   if(linha[i] == 'W'){
                              clock++;
                              if(proc > 0){
                                      proc = 0;
                                      clock++;
                              }
                   }
                   else{
                        proc++;
                        if(proc == p){
                                clock++;
                                proc = 0;
                        }
                   }
             }
             if(proc > 0) clock ++;
             printf("%d\n",clock);
    }
    return 0;
}
