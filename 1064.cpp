#include <iostream>
#include <stdio.h>

int main(){
    float a,b,c,d,e,f;
    float post = 0.0;
    float soma = 0.0;
    
    std::cin >> a;
    if(a >= 0.0){
         post += 1.0;
         soma += a;
    }
    std::cin >> b;
    if(b >= 0.0){
         post += 1.0;
         soma += b;
    }
    std::cin >> c;
    if(c >= 0.0){
         post += 1.0;
         soma += c;
    }
    std::cin >> d;
    if(d >= 0.0){
         post += 1.0;
         soma += d;
    }
    std::cin >> e;
    if(e >= 0.0){
         post += 1.0;
         soma += e;
    }
    std::cin >> f;
    if(f >= 0.0){
         post += 1.0;
         soma += f;
    }
    
    printf("%.0f valores positivos\n", post);
    printf("%.1f\n", soma/post);
    return 0;
}
    
    
