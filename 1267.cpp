#include <stdio.h>

int main(){
    int n, d, i, j, cont;
    
    while(1){
        scanf("%d %d", &n, &d);
        if(n == 0 && d == 0) break;
        bool jantar[d][n];
        for(i = 0; i < d; i++){
              for(j = 0; j < n; j++){
                    scanf("%d",&jantar[i][j]);
              }
        }
        for(i = 0; i < n; i++){
              cont = 0;
              for(j = 0; j < d; j++){
                    if(jantar[j][i]) cont++;
              }
              if(cont == d){
                      printf("yes\n");
                      break;
              }
        }
        if(cont != d) printf("no\n");
    }
    return 0;
}
