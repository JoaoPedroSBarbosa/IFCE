#include <stdio.h>
#define qtd 20

int main(){

  char x[qtd];
  int c = 0;

  puts("Insira uma palavra: ");
  fgets(x, sizeof(x), stdin);

  for(int k = 0; x[k] != '\0'; k++){
    if(x[k] == ' '){
      continue;
    }else{
      c++;
    }
  }

  printf("O tamanho da sua palavra é %d letras.", c - 1);
  
  return 0;
  
}