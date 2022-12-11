#include <stdio.h>
#define qtd 20

int main(){

  char x[qtd], y;

  puts("Insira uma palavra: ");
  fgets(x, sizeof(x), stdin);

  puts("Insira uma letra: ");
  scanf("%s",&y);

  for(int k = 0; k < qtd; k++){
    if(x[k] == y){
      printf("A letra %c está na posição %d.\n", y, k + 1);
    }
  }
  
  return 0;
  
}