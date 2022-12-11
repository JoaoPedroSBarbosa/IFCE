#include <stdio.h>
#define qtd 30

void copiar(char *, char *, int);

int main(){
  char x[qtd], y[qtd];
  char *px = x, *py = y;

  printf("Insira uma palavra: ");
  fgets(x, 100, stdin);

  copiar(px, py, qtd);
  
  return 0;
}

void copiar(char *x, char *y, int p){
  for(int i = 0; i < p; i++){
    *(y + i) = *(x + i);
  }

  printf("\nA palavra fornecida:\n");
  for(int i = 0; i < p; i++){
    printf("%c",*(x + i));
  }
  
  printf("\nA palavra copiada:\n");
  for(int i = 0; i < p; i++){
    printf("%c",*(y + i));
  }
}