#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    float a,b,c;
    float mod1, mod2, mod3;
    
    cin >> a >> b >> c;
    
    if(b - c < 0)
         mod1 = c - b;
    else
        mod1 = b - c;
        
    if(b - a < 0)
         mod2 = a - b;
    else
        mod2 = b - a;
        
    if(a - c < 0)
         mod3 = c - a;
    else
        mod3 = a - c;
    
    if(mod1 < a && a < (b + c) && mod2 < c && c < (a+b) && mod3 < b && b < (a+c))
            printf("Perimetro = %.1f\n", a+b+c);
    else
            printf("Area = %.1f\n", ((a+b)*c)/2.0);
            
    return 0;   
}
