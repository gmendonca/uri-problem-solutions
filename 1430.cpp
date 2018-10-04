#include <iostream>
#include <map>

using namespace std;

int main(){
    map <char, double> noutes;

    string lenha;
    double tempo;
    int compassu;

    noutes['W'] = 1.0;
    noutes['H'] = 1.0/2;
    noutes['Q'] = 1.0/4;
    noutes['E'] = 1.0/8;
    noutes['S'] = 1.0/16;
    noutes['T'] = 1.0/32;
    noutes['X'] = 1.0/64;

    while(cin >> lenha){
        if(lenha == "*") break;
        compassu = 0;
        for(int i=0;i<lenha.size();i++){
            if (lenha[i] == '/'){
                if (tempo == 1.0) compassu++;
                tempo = 0;
            }
            else tempo += noutes[lenha[i]];
        }
        cout << compassu << endl;
    }

    return 0;
}
