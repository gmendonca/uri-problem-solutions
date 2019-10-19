#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double r;
    double pi = 3.14159;

    while(cin >> r){
    cout << fixed << "A=" << setprecision(4) << r*r*pi << endl;
    }

    return 0;
}
