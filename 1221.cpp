#include <stdio.h>
#include <math.h>

int main(){
    int n, teste;
    long p;
    
    scanf("%d", &n);
    
    for(int i = 0; i <n; i++){
            teste = 0;
            scanf("%ld", &p);
            
            if(p == 0){
                 printf("%s\n", "Not Prime");
                 continue;
            }
            
            if(p == 1){
                 printf("%s\n", "Not Prime");
                 continue;
            }
            
            if(p == 2){
                 printf("%s\n", "Prime");
                 continue;
            }
            
            for(int i = 2; i < sqrt(p)+1; i++){
                    if(p%i == 0) teste++;
                    if(teste == 2) break;
            }
            
            if(teste >= 1) printf("%s\n", "Not Prime");
            else printf("%s\n", "Prime");
    }
    return 0;
}
