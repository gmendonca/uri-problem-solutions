#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int n;
    int q;
    char t;
    int total = 0;
    int coelho = 0;
    int sapo = 0;
    int rato = 0;
    
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
            cin >> q;
            cin >> t;
            
            total += q;
            
            if(t == 'C') coelho += q;
            if(t == 'S') sapo += q;
            if(t == 'R') rato += q;
    }
    
    cout << "Total: " << total << " cobaias\n";
    cout << "Total de coelhos: " << coelho << "\n";
    cout << "Total de ratos: " << rato << "\n";
    cout << "Total de sapos: " << sapo << "\n";
    printf("Percentual de coelhos: %.2f %\n", ((float)coelho/(float)total)*100.00);
    printf("Percentual de ratos: %.2f %\n", ((float)rato/(float)total)*100.00);
    printf("Percentual de sapos: %.2f %\n", ((float)sapo/(float)total)*100.00);
    return 0;
    
}
            
