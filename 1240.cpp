#include <stdio.h>
#include <math.h>

int numDigits(long long number)
{
    int digits = 0;
    
    while (number) {
        number /= 10;
        digits++;
    }
    
    return digits;
}

int main(){
    int n;
    long long x, y, valor, z;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
            scanf("%lld %lld", &x, &y);
            z = numDigits(y);
            z = ceil(pow(10,z));
            valor = x%z;
            printf("%s\n", (valor == y) ? "encaixa" : "nao encaixa");
    }
    return 0;
}
