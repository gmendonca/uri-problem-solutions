#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    double r;
    double pi = 3.14159;

    while(cin >> r){
        printf("A=%0.4lf\n",r*r*pi);
    }

    return 0;
}
