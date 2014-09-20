#include <stdio.h>
#include <iostream>


int main(){
    
    float a,b,c,d,e,media;
    
    std::cin >> a >> b >> c >> d;
    
    media = (a*2 + b*3 + c*4 + d*1)/(10.0);
    printf("Media: %.1f\n", media);
    
    if(media > 7.0)
            std::cout << "Aluno aprovado.\n";
    if(media < 5.0)
            std::cout << "Aluno reprovado.\n";
    if(media > 5.0 && media < 6.9){
            std::cout << "Aluno em exame.\n";
            std::cin >> e;
            printf("Nota do exame: %.1f\n", e);
                         if((media + e)/2.0 >= 5.0)
                                  std::cout << "Aluno aprovado.\n";
                         else
                           std::cout << "Aluno reprovado.\n";
                         printf("Media final: %.1f\n", (media + e)/2.0);
            }
    return 0;
}
