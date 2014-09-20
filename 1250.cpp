#include <stdio.h>

int main(){
    int n, x, i, j, cont;
    char c;
    
    scanf("%d",&n);
    
    for(i = 0; i < n; i++){
        scanf("%d",&x);
        cont = 0;
        int tiro[x];
        char pulo[x+1];
        for(j = 0; j < x; j++){
            scanf("%d",&tiro[j]);
        }
        scanf("%s%*c",&pulo);
        for(j = 0; j < x; j++){
            if(pulo[j] == 'S'){
                if(tiro[j] < 3) cont++;
            }
            else{
                if(tiro[j] > 2) cont++;
            }
        }
        printf("%d\n", cont);
    }
    return 0;
}
