#include <iostream>

using namespace std;

int main(){
    int a,b,aux;
    
    cin >> a >> b;
    
    if(a < b){
         aux = a;
         a = b;
         b = aux;
    }
    
    if(a%b == 0)
           cout << "Sao Multiplos\n";
    else
           cout << "Nao sao Multiplos\n";
           
    return 0;
}
