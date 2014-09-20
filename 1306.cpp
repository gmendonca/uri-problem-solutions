#include <stdio.h>

int main(){
    int r, n, j;
    int i = 1;
    int flag;
    
    while(1){
        scanf("%d %d",&r, &n);
        if(r == 0 && n == 0) break;
        flag = 0;
        
        if(n >= r){
             printf("Case %d: 0\n", i);
        }else{
               for(j = 1; j < 27;  j++){
                     if(n*(j+1) >= r){
                              printf("Case %d: %d\n", i, j);
                              flag = 1;
                              break;
                     }
               }
               if(flag == 0) printf("Case %d: impossible\n", i);
        }
        i++;
    }
    return 0;
}
