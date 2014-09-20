#include <stdio.h>
int cont;
int fibonacci(int n){
    cont++;
    if(n == 0) return 0;
    if(n == 1) return 1;
    else return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
    int n, o;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
            scanf("%d",&o);
            cont = 0;
            printf("fib(%d) = %d calls = %d\n",o,cont-1,fibonacci(o));
    }
    return 0;
}
