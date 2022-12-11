#include <stdio.h>
#include <string.h>
#define qtd 20

int main(){

  char x[qtd*2], y[qtd];

  puts("Insira uma palavra: ");
  fgets(x, sizeof(x), stdin);

  puts("Insira uma palavra: ");
  fgets(y, sizeof(y), stdin);

  strcat(x, y);

  printf("A nova string será: %s", x);
  //printf("A string para concatenar: %s", y);
  
  return 0;
  
}