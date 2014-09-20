#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int a, b, c, d;
    
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    
    int r = (a*b - c*d);
    printf("DIFERENCA = %d\n",r);
    
    return 0;
}
