#include <stdio.h>
#include <math.h>

const double pi = atan(1.0)*4;

int main(){
    double f, senos;
    
    senos = sin((108*pi)/180) / sin((63*pi)/180);
    
    while(scanf("%lf",&f) != EOF){
                         printf("%.10lf\n",senos*f);
    }
    return 0;
}
