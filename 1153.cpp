#include <iostream>

using namespace std;

int main(){
    
    int op;
    int fat = 1;
    
    cin >> op;
    
    for(int i = 0; i < (op-1); i++){
            fat *= (op - i);
    }
    cout << fat << endl;
    return 0;
}
