#include <stdio.h>
#include <deque>

int main(){
    int n, i;
    
    while(1){
             scanf("%d",&n);
             if(n == 0) break;
             std::deque<int> cartas;
             for(i = 1; i <= n; i++){
                   cartas.push_back(i);
             }
             
             printf("Discarded cards: ");
             while(cartas.size() > 1){
                  if(cartas.size() != 2) printf("%d, ", cartas.front());
                  else printf("%d\n", cartas.front());
                  cartas.pop_front();
                  cartas.push_back(cartas.front());
                  cartas.pop_front();
             }
             printf("Remaining card: %d\n",cartas.front());
    }
    return 0;
}
