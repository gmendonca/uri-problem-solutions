#include <iostream>

using namespace std;

int main(){
    
    int n;
    int x, y, aux;
    int soma;
    
    cin >> n;
    
    while(true){
                if(n == 0) break;
                cin >> x;
                cin >> y;
                
                if(x > y){
                     aux = x;
                     x = y;
                     y = aux;
                }
                soma = 0;
                for(int i = x+1; i < y; i++){
                       if(i%2 != 0) soma += i;
                }
                cout << soma << endl;
                n--;
    }
    return 0;
}
