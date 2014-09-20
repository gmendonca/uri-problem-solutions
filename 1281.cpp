#include <stdio.h>
#include <string.h>

struct fruta{
    char nome[100];
    float valor;
};

int main(){
    int n, i, j, qtd, m, o, p;
    char f[100];
    float total;
    
    scanf("%d",&n);
    for(i = 0; i < n; i++){
        total = 0.0;
        scanf("%d",&m);
        struct fruta array[m];
        for(j = 0; j < m; j++){
            scanf("%s %f",&array[j].nome,&array[j].valor);
        }
        scanf("%d",&o);
        for(j = 0; j < o; j++){
            scanf("%s %d",&f,&qtd);
            for(p = 0; p < m; p++){
                if(!strcmp(array[p].nome,f)){
                total += qtd*array[p].valor;
                break;
                }
            }
        }
        printf("R$ %.2f\n",total);
    }
    return 0;
}
        
