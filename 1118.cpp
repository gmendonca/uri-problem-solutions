#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    
    float x, y, z, n;
    y = 0;
    z = 0;
    n = 0;
    while(true){
                cin >> x;
                if(n == 1){
                     
                if(x == 2){
                     break;
                }else if(x == 1){
                       n = 0;
                       continue;
                }
                else{
                     cout << "novo calculo (1-sim 2-nao)\n";
                     continue;
                     }
                }else{
                if(x < 0 || x > 10){
                      cout << "nota invalida\n";
                      }
                else if(z == 0){
                      y = x;
                      z = 1;
                }
                else{
                     printf("media = %.2f\n", (x+y)/2.00);
                     z = 0;
                     n = 1;
                }
                }
                
                if(n == 1) cout << "novo calculo (1-sim 2-nao)\n";
                     
    }    
    return 0;
}
