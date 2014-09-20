#include <stdio.h>
#include <iostream>

int main(){
    long long m, n;
    
    long long fat[21];
    fat[0] = 1;
    
    for(int i = 1; i <= 20; i++){
            fat[i] = fat[i-1]*i;
     }
    
    while(std::cin >> m){
                   std::cin >> n;
                 printf("%lld\n", fat[m] + fat[n]);
    }
    
    return 0;
}
