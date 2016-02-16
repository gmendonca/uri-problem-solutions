#include <stdio.h>

int flavious(int x, int y){
    if(x == 1) return 1;
    return (flavious(x-1,y)+y-1)%x+1;
}

int main(){
    int n, x, y;
    while(1){
           scanf("%d",&n);
           if(n == 0) break;
           y = 1;
           for(;;){
                   if(flavious(n-1,y) == 12) break;
                   else y++;
           }
           printf("%d\n",y);
    }
    return 0;
}
