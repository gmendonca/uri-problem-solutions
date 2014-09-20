#include <iostream>

int main(){
    int n, num;
    int perf;
    std::cin >> n;
    for(int i = 0; i < n; i++){
            std::cin >> num;
            perf = 0;
            
    for(int i = 1; i < num; i++){
            if(num%i == 0){
                   perf += i;
                   if(perf > num) break;
            }
    }
    if(perf == num) std::cout << num << " eh perfeito\n";
    else std::cout << num << " nao eh perfeito\n";
    
    }
    return 0;
}
