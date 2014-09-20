#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int a, b;
    float c;
    
    cin >> a;
    cin >> b;
    cin >> c;
    
    cout << "NUMBER = " << a << endl;
    printf("SALARY = U$ %.2f\n", b*c);
    
    return 0;
}
