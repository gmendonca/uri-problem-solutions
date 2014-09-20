#include <stdio.h>
#include <string.h>

long NumCarryAdd(long n1, long n2 ) {
    long a,b,c,t;
    c = 0;
    t = 0;
    while(1){
                 a=n1%10;
                 b=n2%10;
                 n1=n1/10;
                 n2=n2/10;
                 if((a+b+c)>=10){
                                 t++;
                                 c=1;
                 }
                 else c = 0; 
                 if(n1==0 && n2==0)break;
    }
    return t;
}

int main(){
    long x, y, carry;
    while(1){
             scanf("%ld %ld", &x,&y);
             if(x == 0 && y == 0) break;
             carry = NumCarryAdd(x, y);
             if(carry == 0) printf("No carry operation.\n");
             else if(carry==1)printf("1 carry operation.\n");
             else printf("%ld carry operations.\n", carry);
    }
    return 0;
}
