#include <stdio.h>
#include <math.h>

double gambler(int n1, int n2, int at){
    double dado;
           if(at == 3){
                  return (double)n1/(double)(n1+n2);
            }else{
                  dado = 1.0 - (6-at)/6.0;
                  dado = (1 - dado)/dado;
                  return (1.0 - pow(dado,n1))/(1.0 - pow(dado,n1+n2));
            }
}

int main(){
    int ev1, ev2, at, d, aux;
    
    double p;
    
    for(;;){
            scanf("%d %d %d %d",&ev1,&ev2,&at,&d);
            
            if(ev1 == 0 && ev2 == 0 && at == 0 && d == 0) break;
            
            aux = ev1;
            ev1 = 0;
            while(aux > 0){
                       aux -= d;
                       ev1++;
            }
            aux = ev2;
            ev2 = 0;
            while(aux > 0){
                       aux -= d;
                       ev2++;
            }
            
            p = gambler(ev1,ev2,at);            
            
            printf("%.1f\n",p*100);
    }
    return 0;
}           
