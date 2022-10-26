#include <stdio.h>
#include <string.h>
#define qtd 20

int main(){

  char x[qtd], y[qtd];
  int len = strlen(x), z;
  
  puts("Insira uma palavra: ");
  fgets(x, sizeof(x), stdin);

  for(int i = 0; i < len/2; i++){
    z = x[i];  
    x[i] = x[len - i - 1];  
    x[len - i - 1] = z; 
  }  

  printf("A nova string será: %s", x);
  
  return 0;
  
}