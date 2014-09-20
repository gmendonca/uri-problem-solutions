#include <iostream>

int main(){
    int n;
    
    std::cin >> n;
    
    for(int i = 1; i <= n; i++){
            if(n%i == 0) std::cout << i << "\n";
    }
    
    return 0;
}
