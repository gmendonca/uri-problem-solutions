#include <iostream>

int main(){
    long long x, y;
    
    while(std::cin >> x){
                   std::cin >> y;
                   if(x >= y) std::cout << x-y << "\n";
                   else std::cout << y-x << "\n";
    }
    
    return 0;
}
