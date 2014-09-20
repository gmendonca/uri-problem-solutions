#include <stdio.h>

int main(){
    int h, m, s;
    int tempo = 0;
    int t;
    double distancia = 0;
    int vel;
    char c;
    
    while(scanf("%d:%d:%d", &h, &m, &s) != EOF){
               scanf("%c", &c);
               if(c == ' '){
                    if(tempo != 0) distancia += (double)(((h*3600 + m*60 + s)-tempo)*vel)/3600;
                    scanf("%d%*c", &vel);
                    tempo = h*3600 + m*60 + s;
               }else{
                     distancia += (double)(((h*3600 + m*60 + s)-tempo)*vel)/3600;
                     printf("%02d:%02d:%02d %.2lf km\n", h, m, s, distancia);
                     tempo = h*3600 + m*60 + s;
               }
    }
    
    return 0;
}
