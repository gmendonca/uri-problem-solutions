#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct elemento{
       int ascii;
       int cont;
};

int compare(const void * a, const void * b){
  return ( *(char*)a - *(char*)b );
}

int comparestruct(const void * a, const void * b){
    struct elemento *ea = (struct elemento *)a; 
    struct elemento *eb = (struct elemento *)b;
    
    if(ea->cont != eb->cont) return ea->cont - eb->cont;
    return eb->ascii - ea->ascii;
}

int main(){
    int i, len, e = 0, cont;
    char line[1001];
    char comp;
    
    while(gets(line)){
          if(e != 0) printf("\n");
          len = strlen(line);
          struct elemento array[len];
          cont = e = 0;
          qsort(line,len,sizeof(char), compare);
          comp = line[0];
          cont++;
          for(i = 1; i < len; i++){
               if(comp == line[i]){
                       cont++;
               }else{
                       array[e].ascii = comp;
                       array[e].cont = cont;
                       comp = line[i];
                       cont = 1;
                       e++;
               }
          }
          array[e].ascii = comp;
          array[e].cont = cont;
          e++;
          qsort(array,e,sizeof(elemento),comparestruct);
          for(i = 0; i < e; i++){
                printf("%d %d\n", array[i].ascii, array[i].cont);
          }
    }
    return 0;
}
