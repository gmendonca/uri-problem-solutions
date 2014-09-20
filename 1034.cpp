#include <stdio.h>
#include <string.h>
#include <iostream>
#include <stdlib.h>
#define N 1000002

int pd[N];

int blocos(int valores[], int n, int m){
    int i, j, k;
    
    if(m%valores[n-1] == 0) return m/valores[n-1];
    
    memset(pd,999999,sizeof(pd));
    pd[0] = 0;
    
    for(i=0; i < n; i++){
        k = valores[i];
        for(j = k; j <= m; j++){
             pd[j] = std::min(pd[j], pd[j-k]+1);
        }
    }
    
    return pd[m];
}

int compare (const void * a, const void * b){
  return ( *(int*)a - *(int*)b );
}

int main(){
    int valores[26];
    int t, n, m;
    int i, j;
    
    scanf("%d", &t);
    for(i = 0; i < t; i++){
          scanf("%d %d", &n, &m);
          for (j = 0; j < n; j++) scanf("%d", &valores[j]);
          qsort(valores, n, sizeof(int), compare);
          printf("%d\n", blocos(valores,n,m));
    }
    return 0;
}
