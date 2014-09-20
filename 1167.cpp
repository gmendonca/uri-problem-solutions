#include <stdio.h>
#include <vector>

struct crianca{
       char nome[30];
       int valor;
       bool marcado;
       struct crianca *ant;
       struct crianca *prox;
};

int main(){
    int n, i, j, n1;
    int marcados, comp, comp1;
    
    while(scanf("%d", &n) && n){          
            struct crianca array[n];
            for(i = 0; i < n; i++){
                  scanf(" %s %d", &array[i].nome, &array[i].valor);
                  if(i != 0){
                       array[i].ant = &array[i-1];
                       array[i-1].prox = &array[i];
                  }
            }
            array[n-1].prox = &array[0];
            array[0].ant = &array[n-1];
            
            std::vector<struct crianca> lista (array,array+n);
            std::vector<struct crianca>::iterator it;
            
            marcados = 0;
            comp = lista[0].valor;
            n1 = n - 1;
            while(marcados != n1 && n >= 2){
            printf("\nInterecao:\n\n");
            for (i=0; i < lista.size(); i++){
                   printf("\n%s:\n", lista[i].nome);
                   printf("valor = %d\n", lista[i].valor);
                   printf("proximo = %s %d\n", lista[i].prox->nome, lista[i].prox->valor);
                   printf("anterior = %s %d\n", lista[i].ant->nome, lista[i].ant->valor);
            }
            if(comp % 2 != 0){
                  printf("aqui\n");  
                  comp = comp%n;
                  if(comp == 0){
                     it = lista.end();
                     it->prox = &lista[0];
                     lista[comp+1].ant = &lista[n-1];
                  }else{
                     lista[comp-1].prox = &lista[comp+1];
                     lista[comp+1].ant = &lista[comp-1];
                  }
                  comp1 = lista[comp].valor;
                  lista.erase(lista.begin()+comp);
                  marcados++;
                  n--;
                  comp = comp1;
            }else{
                  comp = comp%n;
                  if(comp == 0){
                     it = lista.end();
                     it->prox = &lista[0];
                     lista[comp+1].ant = &lista[n-1];
                  }else{
                     lista[n-comp-1].prox = &lista[n-comp+1];
                     lista[n-comp+1].ant = &lista[n-comp-1];
                  }
                  comp1 = lista[n-comp].valor;
                  lista.erase(lista.begin()+(n-comp));
                  marcados++;
                  n--;
                  comp = comp1;
            }
            }
            
            printf("Vencedor(a): %s\n", lista[0].nome);
    }
    return 0;
}
            
            
