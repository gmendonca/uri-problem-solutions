#include <iostream>

using namespace std;

int main(){
    float a,b,c,d,e,f;
    int num = 0;
    
    cin >> a >> b >> c >> d >> e >> f;
    
    if(a > 0.0) num++;
    if(b > 0.0) num++;
    if(c > 0.0) num++;
    if(d > 0.0) num++;
    if(e > 0.0) num++;
    if(f > 0.0) num++;
    
    cout << num << " valores positivos\n";
         
    return 0;
}
