#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

typedef struct Camisa{
    string Nome;
    string Cor;
    char Tam;
};

bool OrderCamisas(Camisa Y, Camisa Z){
    if (Y.Cor == Z.Cor){
        if (Y.Tam == Z.Tam) return Y.Nome < Z.Nome;
        return Y.Tam > Z.Tam;
    }
    return Y.Cor < Z.Cor;
}

int main(){
    //freopen("entradas.in", "r", stdin);
    int num;
    bool imprime = false;

    while(cin >> num){
        Camisa Turma[num];
        cin.get();
        for(int i=0;i<num;i++){
            getline(cin, Turma[i].Nome);
            cin >> Turma[i].Cor;
            cin >> Turma[i].Tam;
            cin.get();
        }

        sort(Turma, Turma+num, OrderCamisas);

        if (imprime and num != 0) cout << endl;
        imprime = true;
        for(int i=0;i<num;i++){
            cout << Turma[i].Cor << " " << Turma[i].Tam << " " << Turma[i].Nome << endl;
        }
    }
    return 0;
}
