#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    
    int x, y, z;
    cin >> x;
    
    for(int i = 0; i < x; i++){
            cin >> y;
            cin >> z;
            
            if(z == 0){
                 cout << "divisao impossivel\n";
            } else{
                   printf("%.1f\n", (float)y/(float)z);
            }
    }
            
    
    return 0;
}
