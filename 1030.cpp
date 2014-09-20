#include <stdio.h>
#include <cstring>

int flavious(int x, int y){
    if(x == 1) return 0;
    return (flavious(x-1,y)+y)%x;
}

int remaining(int n, int k) {
    int r = 0;
    for (int i = 2; i <= n; i++)
        r = (r + k) % i;

    return r;
}

int main(){
    int n, x, y, j, num, pulo;
    
    scanf("%d",&n);
    
    for(int i = 0; i < n; i++){
            scanf("%d %d",&x,&y);
            //printf("Case %d: %d\n",i+1,flavious(x,y)+1);
            printf("Case %d: %d\n",i+1,remaining(x,y)+1);
    }
    return 0;
}
