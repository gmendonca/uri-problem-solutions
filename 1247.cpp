#include <iostream>
#include <math.h>

int main(){
     float vf, vg, d;
     float hip;
     
     while(std::cin >> d){
                    std::cin >> vf;
                    std::cin >> vg;
                    
                    hip = sqrt(d*d + 144);
                    
                    if(hip/vg <= 12/vf) std::cout << "S\n";
                    else std::cout << "N\n";
     }
     return 0;
}
