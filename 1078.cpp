#include <iostream>

using namespace std;

int main(){
    int N;
    
    cin >> N;
    
    for(int i = 1; i <= 10; i++)
            cout << i << " x " << N << " = " << N*i << "\n";
            
    return 0;
}
