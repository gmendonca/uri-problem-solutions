#include <iostream>

using namespace std;

int main(){
    int a;
    
    cin >> a;
    for(int i = 0; i < a*4;){
            cout << (i+1) << " " << (i+2) << " " << (i+3) << " PUM\n";
            i+=4;
    }
    return 0;
}
