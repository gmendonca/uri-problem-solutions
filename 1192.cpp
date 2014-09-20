#include <stdio.h>

int main(){
    int n, i, a, c;
    char b;
    
    scanf("%d",&n);
    
    for(i = 0; i < n; i++){
        scanf("%d%c%d",&a,&b,&c);
        
        if(a == c)
            printf("%d\n",a*c);
        else if(b >= 65 && b <= 90)
            printf("%d\n",c-a);
        else
            printf("%d\n",c+a);
    }
    return 0;
}
