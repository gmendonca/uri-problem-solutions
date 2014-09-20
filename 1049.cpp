#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){
    char input[80];
    char input2[80];
    char input3[80];
    
    cin >> input;
    cin >> input2;
    cin >> input3;
    
    if(!strcmp(input, "vertebrado")){
                      if(!strcmp(input2, "ave")){
                               if(!strcmp(input3, "carnivoro")){ 
                                                  cout << "aguia\n";
                               }
                               if(!strcmp(input3, "onivoro")){ 
                                                  cout << "pomba\n";
                               }        
                      }
                      if(!strcmp(input2, "mamifero")){
                               if(!strcmp(input3, "onivoro")){ 
                                                  cout << "homem\n";
                               }
                               if(!strcmp(input3, "herbivoro")){ 
                                                  cout << "vaca\n";
                               }        
                      }
    }
    
    if(!strcmp(input, "invertebrado")){
                      if(!strcmp(input2, "inseto")){
                               if(!strcmp(input3, "hematofago")){ 
                                                  cout << "pulga\n";
                               }
                               if(!strcmp(input3, "herbivoro")){ 
                                                  cout << "lagarta\n";
                               }        
                      }
                      if(!strcmp(input2, "anelideo")){
                               if(!strcmp(input3, "hematofago")){ 
                                                  cout << "sanguessuga\n";
                               }
                               if(!strcmp(input3, "onivoro")){ 
                                                  cout << "minhoca\n";
                               }        
                      }
    }
    return 0;
}
