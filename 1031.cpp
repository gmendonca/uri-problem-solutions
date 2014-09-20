#include <stdio.h>

int remaining(int n, int k) {
    int r = 0;
    for (int i = 1; i < n; i++)
        r = (r + k) % i;

    return r;
}

int main(){
    int n, x, y, j, num, pulo;
    while(1){
           scanf("%d",&n);
           if(n == 0) break;
           y = 1;
           for(;;){
                   if(remaining(n,y) != 11) y++;
                   else break;
           }
           printf("%d\n",y);
    }
    return 0;
}
