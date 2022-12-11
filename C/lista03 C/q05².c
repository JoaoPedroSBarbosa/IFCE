#include <stdio.h>
#include <string.h>
#define qtd 20

int main(){

  char x[qtd], y[qtd], z[qtd*2];
  int i = 0, j = 0;

  puts("Insira uma palavra: ");
  fgets(x, sizeof(x), stdin);

  puts("Insira uma palavra: ");
  fgets(y, sizeof(y), stdin);

  do{
    z[j] = x[i];
    i++;
    j++;
  }while(x[i] != '\0');

  i = 0;

  do{
    z[j] = y[i];
    i++;
    j++;
  }while(y[i] != '\0');
  
  printf("A nova string será: %s", z);
  
  return 0;
  
}