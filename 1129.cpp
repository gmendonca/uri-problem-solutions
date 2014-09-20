#include <iostream>


using namespace std;

int main(){
    int n;
    int a,b,c,d,e;
    int teste;
    int op;
    
    while(n != 0){
            cin >> n;
            for(int i = 0; i < n; i++){
                    teste = 0;
                    
                    cin >> a;
                    cin >> b;
                    cin >> c;
                    cin >> d;
                    cin >> e;
                    
                    if(a <= 127){ teste++; a = 1; } else { a = 0; }
                    if(b <= 127){ teste++; b = 1; } else { b = 0; }
                    if(c <= 127){ teste++; c = 1; } else { c = 0; }
                    if(d <= 127){ teste++; d = 1; } else { d = 0; }
                    if(e <= 127){ teste++; e = 1; } else { e = 0; }
                    
                    if(teste == 1){
                             if(a == 1) cout << "A\n";
                             if(b == 1) cout << "B\n";
                             if(c == 1) cout << "C\n";
                             if(d == 1) cout << "D\n";
                             if(e == 1) cout << "E\n";
                    }else{
                          cout << "*\n";
                    }
            }
                      
    }
    return 0;
}
