#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;

int main(){

    int n, soma=0;
    string linha, resultadow = "", palavbra;

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> palavbra;
        if (palavbra.size() == 5) cout << "3" << endl;
        else
            if ((palavbra[0] == 'o' and palavbra[1] == 'n') or (palavbra[1] == 'n' and palavbra[2] == 'e') or
                (palavbra[0] == 'o' and palavbra[2] == 'e')) cout << "1" << endl;
            else cout << "2" << endl;
    }

    return 0;
}

