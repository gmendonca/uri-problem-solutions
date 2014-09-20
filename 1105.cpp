#include <stdio.h>

int main(){
    int b, n, i, d, c, v, test;
    
    while(1){
        scanf("%d %d", &b, &n);
        if(b == 0 && n == 0) break;
        
        test = 0;
        int reserves[b];
          
        for(i = 1; i <= b; i++)
            scanf("%d",&reserves[i]);
        
        for(i = 1; i <= n; i++){
            scanf("%d %d %d", &d, &c, &v);
            
            reserves[d] -= v;
            reserves[c] += v;
        }
        
        for(i = 1; i <= b; i++){
            if(reserves[i] < 0){
                test = 1;
                break;
            }
        }
        
        if(test == 1) printf("N\n");
        else printf("S\n");
   }
   return 0;
}

