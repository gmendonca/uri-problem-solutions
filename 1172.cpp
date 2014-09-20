#include <iostream>

int main(){
    int n;
    for(int i = 0; i < 10; i++){
            std::cin >> n;
            if(n <= 0) n = 1;
            std::cout << "X[" << i << "] = " << n << "\n";
    }
    return 0;
}
