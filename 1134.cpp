#include <iostream>

using namespace std;

int main(){
    
    int op;
    int al = 0;
    int ga = 0;
    int di = 0;
    
    while(true){
                cin >> op;
                if(op == 1) al++;
                else if(op == 2) ga++;
                else if(op == 3) di++;
                else if(op == 4) break;
                else continue;
    }
    
    cout << "MUITO OBRIGADO\n";
    cout << "Alcool: " << al << "\n";
    cout << "Gasolina: " << ga << "\n";
    cout << "Diesel: " << di << "\n";
    return 0;
}
                
