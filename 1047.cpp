#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int a, b, c, d;
    
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    
    int inicio = a*60 + b;
    int final = c*60 + d;
    int duracao = 0;
    
    if(a <= c){
              duracao = final - inicio;
              if(duracao == 0)
                          printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24,duracao%60);
              else
                          printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(duracao - duracao%60)/60,duracao%60);
    }else{
          duracao = (24*60 - inicio) + final;
          printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(duracao - duracao%60)/60,duracao%60);
    }
    
    return 0;
    
}
