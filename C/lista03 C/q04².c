#include <stdio.h>
#define qtd 20

int main(){

  char x[qtd], y[qtd];
  int i = 0, j = 0;

  puts("Insira uma palavra: ");
  fgets(x, sizeof(x), stdin);

  puts("Insira uma palavra: ");
  fgets(y, sizeof(y), stdin);

  do{
    if(x[i] != y[i]){
      j = 1;
      break;
      }
    i++;
  }while(x[i] != '\0' && y[i] != '\0');

  if(j == 1){
    printf("As palavras fornecidas nao sao iguais.");
  }else{
    printf("As palavras fornecidas sao iguais.");
  }
  
  return 0;
  
}