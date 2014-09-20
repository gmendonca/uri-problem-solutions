#include <stdio.h>
#include <stack>

int main(){
    int n, i, j;
    char linha[2000];
    char entrada[1000], saida[1000];
    std::stack<char> pilha;
    
    while(scanf("%d", &n) && n){
        for (i = 0; i < n; i++) 
            scanf(" %c", &entrada[i]);
        for (i = 0; i < n; i++) 
            scanf(" %c", &saida[i]);
        entrada[n] = saida[n] = '\0';
        i = j = 0;
        while(1){
                 if(!pilha.empty() && j < n && pilha.top() == saida[j]){
                       pilha.pop();
                       printf("R");
                       j++;
                 }else if(i < n){
                        pilha.push(entrada[i]);
                        printf("I");
                        i++;
                 }else break;                    
        }
        
        if(pilha.empty()) printf("\n");
        else  printf(" Impossible\n");
        while (!pilha.empty()){
              pilha.pop();
        }
    }
    return 0;
}
