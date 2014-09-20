#include <iostream>

using namespace std;

int main(){
    int inteiro, aux;
    
    cin >> inteiro;
    
    cout << inteiro <<"\n";
    cout << inteiro/100 << " nota(s) de R$ 100,00\n";
    aux = (inteiro%100);
    cout << aux/50 << " nota(s) de R$ 50,00\n";
    aux = (aux%50);
    cout << aux/20 << " nota(s) de R$ 20,00\n";
    aux = (aux%20);
    cout << aux/10 << " nota(s) de R$ 10,00\n";
    aux = (aux%10);
    cout << aux/5 << " nota(s) de R$ 5,00\n";
    aux = (aux%5);
    cout << aux/2 << " nota(s) de R$ 2,00\n";
    aux = (aux%2);
    cout << aux/1 << " nota(s) de R$ 1,00\n";
    return 0;
}
