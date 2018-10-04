#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <iomanip>
#include <cstdio>

using namespace std;

int main(){
    //freopen("entradas.in", "r", stdin);
    int n, widt, extrelas;
    string axterisco;
    bool espaco = false;

    while(cin >> n){
        extrelas = 2;
        widt = (n/2) + 1;
        for(int i=widt;i<=n;i++){
            axterisco = "";
            for(int f=1;f<extrelas;f++){
                axterisco += "*";
            }
            cout << setw(i) << axterisco << endl;
            extrelas += 2;
        }
        cout << setw(widt) << "*" << endl;
        cout << setw(widt+1) << "***" << endl;
        cout << endl;
    }

    return 0;
}
