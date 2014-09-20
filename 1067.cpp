#include <iostream>

int main(){
    int x;
    
    std::cin >> x;
    
    for(int i = 1; i <=x; i++){
            if(i%2 != 0)
                   std::cout << i << "\n";
    }
    return 0;
}
