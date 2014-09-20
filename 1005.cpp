#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    float a,b;
    
    cin >> a;
    cin >> b;
    
    printf("MEDIA = %.5f\n", (a*3.5 + b*7.5)/(7.5+3.5));
    return 0;
}
