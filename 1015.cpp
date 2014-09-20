#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
    int x1, y1, x2, y2;
    
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    
    printf("%.4f\n", sqrt(pow(x2-x1,2)+pow(y2-y1,2)));
    
    return 0;
}
