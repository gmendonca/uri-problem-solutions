#include <stdio.h>
#include <math.h>
#include <cstring>
int prime[3502];

int flavious(int n) {
    int r = 0;
    for (int i = 1; i <= n; i++){
        r = (r + prime[n-i]) % i;
    }
    return r;
}

int isPrime(int n) { 
    int i;
    if(n == 2) return 1;
    if(n%2 == 0) return 0;
    for(i = 3; i*i<=n; i+=2) {
        if(n%i == 0) return 0;
    }
    return 1;
}

void primeNumbers(){
     memset(&prime, 0, sizeof(prime));
     int j;
     int a = 0;
     for(j = 2; j < 32650; j++){
           if(isPrime(j)){
                          prime[a] = j;
                          a++;
           }
     }
}

int main(){
    int x;
    
    primeNumbers();

    while(1){
            scanf("%d",&x);
            if(x == 0) break;
            printf("%d\n",flavious(x)+1);
    }
    return 0;
}
