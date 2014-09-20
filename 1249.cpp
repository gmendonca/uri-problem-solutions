#include <stdio.h>

int main(){
    char c;
    
    while(scanf("%c",&c) != EOF){
                  if(c >= 'a' && c <='z'){
                              if(c + 13 > 'z') printf("%c",c - 13);
                              else printf("%c",c + 13);
                  }
                  else if(c >= 'A' && c <='Z'){
                              if(c + 13 > 'Z') printf("%c",c - 13);
                              else printf("%c",c + 13);
                  }
                  else printf("%c",c);
    }
    return 0;
}
