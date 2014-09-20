#include <iostream>

using namespace std;

int main(){
    int N[20];
    int a,aux;
    
    a= 0;
    
    while(cin >> N[a]){
              a++;
    }
    
    a = 0;
    
    for(int i = 19; i >= 10; i--){
            aux = N[i];
            N[i] = N[a];
            N[a] = aux;
            a++;
    }
    
    for(int j = 0; j < 20; j++){
            cout << "N[" << j << "] = " << N[j] << "\n";
    }
    return 0;
}
