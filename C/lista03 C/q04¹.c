#include <stdio.h>
#include <string.h>
#define qtd 20

int main(){

  char x[qtd], y[qtd];

  puts("Insira uma palavra: ");
  fgets(x, sizeof(x), stdin);

  puts("Insira uma palavra: ");
  fgets(y, sizeof(y), stdin);

  if(strcmp(x, y) == 0){
    printf("As palavras fornecidas sao iguais.");
  }else{
    printf("As palavras fornecidas nao sao iguais.");
  }
  
  return 0;
  
}