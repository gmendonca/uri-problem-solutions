#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <iomanip>

using namespace std;

int main(){

    int n, tam = 0;
    bool espaco = false;
    string linha, palavbra;

    cin >> n;
    while(n>0){
        cin.get();
        string palavbras[n];
        for(int i=0;i<n;i++){
            palavbras[i] = "";
            getline(cin,linha);
            stringstream eitcha(linha);
            while(eitcha >> palavbra){
                if(palavbras[i] == "") palavbras[i] = palavbra;
                else palavbras[i] = palavbras[i] + " " + palavbra;
            }
            if (tam == 0) tam = palavbras[i].size();
            else if (tam < palavbras[i].size()) tam = palavbras[i].size();
        }
        if(espaco) cout << endl;
        espaco = true;
        for(int i=0;i<n;i++){
            cout << setw(tam) << palavbras[i] << endl;
        }
        cin >> n;
        tam = 0;
    }

    return 0;
}
