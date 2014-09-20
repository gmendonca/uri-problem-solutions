#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    double n;
     
    cin >> n;
    
    printf("N[%d] = %.4f\n", 0, n);
    
    for(int i = 1; i < 100; i++){
            n = n/2.0;
            printf("N[%d] = %.4f\n", i, n);
    }
    return 0;
}

