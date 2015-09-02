#include <iostream>

using namespace std;

int main(){
    double N;
    int inteiro, aux, aux1;

    while(cin >> N){

    inteiro = N;
    N = 100*N;
    aux1 = N;


    cout << "NOTAS:\n";
    cout << inteiro/100 << " nota(s) de R$ 100.00\n";
    aux = (inteiro%100);
    cout << aux/50 << " nota(s) de R$ 50.00\n";
    aux = (aux%50);
    cout << aux/20 << " nota(s) de R$ 20.00\n";
    aux = (aux%20);
    cout << aux/10 << " nota(s) de R$ 10.00\n";
    aux = (aux%10);
    cout << aux/5 << " nota(s) de R$ 5.00\n";
    aux = (aux%5);
    cout << aux/2 << " nota(s) de R$ 2.00\n";
    aux = (aux%2);
    cout << "MOEDAS:\n";
    cout << aux/1 << " moeda(s) de R$ 1.00\n";

    aux1 = aux1%100;
    cout <<  aux1/50 << " moeda(s) de R$ 0.50\n";
    aux1 = aux1%50;
    cout <<  aux1/25 << " moeda(s) de R$ 0.25\n";
    aux1 = aux1%25;
    cout <<  aux1/10 << " moeda(s) de R$ 0.10\n";
    aux1 = aux1%10;
    cout <<  aux1/5 << " moeda(s) de R$ 0.05\n";
    aux1 = aux1%5;
    cout <<  aux1/1 << " moeda(s) de R$ 0.01\n";
    }

    return 0;
}
