#include <stdio.h>

int main(){
    int g, i, j, angulo, test;
    
    while(scanf("%d",&g) != EOF){
            j = 0;
            test = 0;
            for(i = 0; i < 60; i++){
                  if(i%5 == 0) j++;
                  angulo = i*6 - j*6;
                  if(g == angulo || g == -angulo){
                       test = 1;
                       break;
                  }
            }
            if(test == 1) printf("Y\n");
            else printf("N\n");
    }
    return 0;
}
