#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    float f1, f2, f3;
    char name[256];
    
    cin.getline(name,256);
    cin >> f1;
    cin >> f2;
    f3 = f1 + (0.15*f2);
    printf("TOTAL = R$ %0.2f\n",f3);
    
    return 0;
}
