#include <stdio.h>
#include <string.h>

int max(int a, int b){
    if(a > b) return a;
    return b;
}

int main(){
    int i, j, n, p, op, a, comp;
    
    scanf("%d",&op);
    for(a = 0; a < op; a++){
        scanf("%d",&n);
        int w[n+1];
        int v[n+1];
        
        for(i = 0; i < n; i++){
              scanf("%d %d",&v[i],&w[i]);
        }
        scanf("%d",&p);
        int m[n+1][p+1];
        memset(m, 0, sizeof(m[0][0]) * (n+1) * (p+1));
        scanf("%d",&comp);
        
        for(int i = 1; i <= p; i++){
              for(int j = 0; j < n; j++){
                   if(j > 0){
                        m[j][i] = m[j-1][i];
                        if (w[j] <= i) m[j][i] = max(m[j][i], m[j-1][i-w[j]]+v[j]);
                   }
                   else{
                           m[j][i] = 0;
                           if(w[j] <= i) m[j][i] = max(m[j][i], v[j]);
                   }
               }
        }
        
        if(m[n-1][p] >= comp)printf("Missao completada com sucesso\n");
        else printf("Falha na missao\n");
    }
    return 0;
}
