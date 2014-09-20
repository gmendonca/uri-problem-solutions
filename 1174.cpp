#include <iostream>

int main(){
    float n;
    
    for(int i = 0; i < 100; i++){
            std::cin >> n;
            if(n <= 10) std::cout << "A[" << i << "] = " << n << "\n";
    }
    return 0;
}
