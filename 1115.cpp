#include <iostream>

using namespace std;

int main(){
    
    int x;
    int y;
    
    while(true){
               cin >> x;
               cin >> y;
               
               if(x == 0 || y == 0) break;
               
               if(y > 0 && x > 0) cout << "primeiro\n";
               if(y > 0 && x < 0) cout << "segundo\n";
               if(y < 0 && x < 0) cout << "terceiro\n";
               if(y < 0 && x > 0) cout << "quarto\n"; 
               
    }
    
    return 0;
}
