#include <iostream>

int main(){
    int n;
    std::cin >> n;
    for(int i = 0; i < 10; i++){
            std::cout << "N[" << i << "] = " << n << "\n";
            n *= 2;
    }
    return 0;
}
