#include <stdio.h>

int main(){
    int a, c;
    float b, d;
    char line[1000];
    int flag = 0;
    while(gets(line)){
           if(flag == 0){
                if(sscanf(line,"%d%f", &a, &b) == 2){
                     flag = 1;
                }
                else if(sscanf(line,"%d.", &a) == 1){
                     b = 0;
                }
                else if(sscanf(line,"%f", &b) == 1){
                     a = 0;
                }
                else if(sscanf(line,"%d", &a) == 1){
                     b = 0;
                }
                flag = 1;
           }else{
                sscanf(line,"%d%f", &c, &d);
                if(b > d) printf("%d\n",a+1);
                else printf("%d\n",a);
                flag = 0;
           }
    }
    
    return 0;
}
