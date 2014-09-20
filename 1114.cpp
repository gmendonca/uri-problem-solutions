#include <iostream>

using namespace std;

int main(){
    int a;
    
    while(cin >> a){
             if(a == 2002){
                  cout << "Acesso Permitido\n";
                  break;
             }else{
                  cout << "Senha Invalida\n"; 
             }
    }
    
    return 0;
}
