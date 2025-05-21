#include <stdio.h>

int main(){

int i = 1;
  
 
 printf("\n\n**Agora A torre**\n\n");

  for (int i = 1; i <= 5; i++)
  {
    printf("TORRE pra Direita\n");
  }
  


printf("\n\n**Agora A rainha**\n\n");

 while (i <= 8) { // Repete enquanto o contador for menor que 
        printf("Esquerda!!\n");
        i++; // Incrementa o contador
    }
   
    printf("\n\n**Agora o Bispo**\n\n");
  
     i = 1;
   do {
        printf("Cima,Direita\n");
        
        i++; // Incrementa o contador
    } while (i  <= 5); // Repete enquanto o contador for menor que 5
 
    return 0;
}
