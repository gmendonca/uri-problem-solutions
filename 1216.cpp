#include <stdio.h>

int main(){
    char nome[1000];
    long long dis, cont;
    double total;
    
    cont = 0;
    total = 0.0;
    
    while(scanf("%[^\n]",&nome) != EOF){
          scanf("%*c%lld%*c",&dis);
          total += dis;
          cont++;
    }
    
    printf("%.1lf\n", total/(float)cont);
    return 0;
}
