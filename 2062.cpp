#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;

int main(){

    int n;
    string linha, resultadow = "", palavbra;

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> palavbra;
        if(palavbra.size() == 3){
            if(palavbra.find('O') == 0)
                if(palavbra.find('B') == 1)
                    if(palavbra.find('I') == -1){
                        palavbra.erase(2,1);
                        palavbra = palavbra + 'I';
                    }
            if(palavbra.find('U') == 0)
                if(palavbra.find('R') == 1)
                    if(palavbra.find('I') == -1){
                        palavbra.erase(2,1);
                        palavbra = palavbra + 'I';
                    }
        }
        if(resultadow > "") resultadow = resultadow + " " + palavbra;
        else resultadow = palavbra;
    }

    cout << resultadow << endl;

    return 0;
}


