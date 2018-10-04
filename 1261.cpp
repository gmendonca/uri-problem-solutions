#include <iostream>
#include <map>
#include <iomanip>

using namespace std;

int main(){
    map <string, int> wordes;

    int palavbras, cargous;
    string lidow;
    int many, salari;

    while(cin >> palavbras >> cargous){
        wordes.clear();
        for(int i=0;i<palavbras;i++){
            cin >> lidow >> many;
            wordes[lidow] = many;
        }
        cin.get();
        for(int i=0;i<cargous;i++){
            salari = 0;
            while(cin >> lidow){
                if(lidow == ".") break;
                salari += wordes[lidow];
            }
            cout << salari << endl;
        }
    }

    return 0;
}
