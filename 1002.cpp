#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int r;
    float pi = 3.14159;
    
    while(cin >> r){
    printf("A=%0.4f\n",r*r*pi);
    }
    
    return 0;
}
