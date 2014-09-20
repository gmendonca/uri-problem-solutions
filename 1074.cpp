#include <iostream>

using namespace std;

int main(){
    int x, a;
    
    cin >> x;
    for(int i = 0; i < x; i++){
            cin >> a;
            if(a == 0){
                 cout << "NULL\n";
            }
            else{
            if(a%2 == 0) cout << "EVEN";
            else cout << "ODD";
            
            if(a<0) cout << " NEGATIVE\n";
            else cout << " POSITIVE\n";
            }
    }
    
    return 0;
}
