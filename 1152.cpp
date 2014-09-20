#include <stdio.h>
#include <string>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#define N 200000

int custo;
int father[N];

struct Grafo {
	int x, y, v;
};

Grafo grafo[N];

int cmp(const void *a, const void *b)
{
    return (*(struct Grafo *)a).v - (*(struct Grafo *)b).v;
}

void Makeset(int n)
{
    int i;
    for (i = 0; i <= n; ++i)
    {
        father[i] = i;
    }
}

int Find(int x)
{
    if (father[x] != x)
    {
        father[x] = Find(father[x]);
    }
    return father[x];
}

int Merge(int x, int y, int p)
{
    int i, j;
    i = Find(x);
    j = Find(y);
    if (i != j)
    {
        custo -= grafo[p].v;
        if (i > j)
        {
            father[i] = j;
        }
        else
        {
            father[j] = i;
        }
        return 1;
    }
    return 0;
}

int main(){
    int m, n;
    int i;
    
    while(1){
             scanf("%d %d", &m, &n);
             if(m == 0 && n == 0) break;
             memset(&grafo, 0, sizeof(grafo));
             i = 0;
             custo = 0;
             while(i < n){
                     scanf("%d %d %d",&grafo[i].x, &grafo[i].y, &grafo[i].v);
                     custo += grafo[i].v;
                     i++;
             }
             Makeset(m);
             qsort(grafo, n, sizeof(grafo[0]), cmp);
             for (i = 0; i < n; ++i)
             {
                 Merge(grafo[i].x, grafo[i].y, i);
             }
             printf("%d\n",custo);
    }
    return 0;
}
