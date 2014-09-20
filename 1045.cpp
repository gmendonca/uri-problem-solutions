#include <iostream>

using namespace std;

int main(){
    float a,b,c;
    
    cin >> a >> b >> c;
    
    if(a > (b+c))
         cout << "NAO FORMA TRIANGULO\n";
    if(a*a == (b*b + c*c))
           cout << "TRIANGULO RETANGULO\n";
    if(a*a > (b*b + c*c))
           cout << "TRIANGULO OBTUSANGULO\n";
    if(a*a < (b*b + c*c))
           cout << "TRIANGULO ACUTANGULO\n";
    if(a == b && a == c)
            cout << "TRIANGULO EQUILATERO\n";
    if((a == b && a != c)  || (a == c && a != b) || (b == c && b != a))
            cout << "TRIANGULO ISOSCELES\n";
            
    return 0;
    
}
    
