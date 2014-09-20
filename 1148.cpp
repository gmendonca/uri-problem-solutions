#include <string.h>
#include <stdio.h>
#include <iostream>
#define Vertices int

struct Grafo {
       int v;
       int a;
    int rota[501][501];
};

Grafo grafo;

void dijkstra (int origem, int destino)
{
    int w, w0;
    int fr[501], parnt[501];
    int cst[501];
    
    memset (parnt, -1, sizeof(parnt));
    memset (cst, 999999, sizeof(cst));
    
    fr[origem] = origem;
    cst[origem] = 0;
    
    while(1){
             int mincst = 999999;
             for(w = 0; w < grafo.v; w++){
                   if(parnt[w] == -1 && mincst > cst[w]){
                               mincst = cst[w0=w];
                   }
             }
             if(mincst == 999999) break;
             parnt[w0] = fr[w0];     
             
             for(w = 0; w < grafo.v; w++){
                   if(cst[w] > cst[w0] + grafo.rota[w0][w]){
                               cst[w] = cst[w0] + grafo.rota[w0][w];
                               fr[w]= w0;
                   }
             }
    }
             
             if(cst[destino] <  999999) printf("%d\n", cst[destino]);
             else printf("Nao e possivel entregar a carta\n");
}



int main()
{
	memset(&grafo, 0, sizeof(grafo));
	int n,e,k,o,d;
	int x,y,z;
    int i, j;
    
    while(1){
             scanf("%d %d", &n, &e);
             if(n == 0 && e == 0) break;
             for(i = 0; i <= n; i++)
                   for(j = 0; j <= n; j++)
                         grafo.rota[i][j] = 999999;
             for (i = 0; i < e; ++i){
                     scanf("%d %d %d",&x, &y, &z);
                     if(grafo.rota[y][x] != 999999){
                                    grafo.rota[x][y] = 0;
                                    grafo.rota[y][x] = 0;
                     }else{
                           grafo.rota[x][y] = z;
                     }
             }
             grafo.v = n+1;
             grafo.a = e;
             scanf("%d", &k);
             for (i = 0; i < k; ++i){
                     scanf("%d %d",&o, &d);
                               dijkstra(o, d);
             }
             printf("\n");
    }
	return 0;
}
