#include <iostream>
#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    
    std::cin >> a >> b >> c;
    
    if((pow(b,2) - 4*a*c) < 0)
                 std::cout << "Impossivel calcular\n";
    else{
         printf("R1 = %.5f\n",((-1*b) + sqrt((pow(b,2) - 4*a*c)))/(2*a));
         printf("R2 = %.5f\n",((-1*b) - sqrt((pow(b,2) - 4*a*c)))/(2*a));
         }
    return 0;
}
    
    
