#include <stdio.h>

int main(){
    int n, dias;
    float x;
    
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
            scanf("%f", &x);
            dias = 0;
            while(x > 1){
                    x /= 2;
                    dias++;
            }
            printf("%d dias\n", dias);
    }
    
    return 0;
}
