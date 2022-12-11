#include <stdio.h>
#include <stdlib.h>
#define qtd 20

void ver(char *, char *);

int main(){

  char x[qtd], y;
  char *px = x, *py = &y;

  printf("Insira a primeira palavra: ");
  fgets(x, 20, stdin);

  printf("Insira uma letra para verificação: ");
  scanf("%c",py);

  ver(px, py);
  
  return 0;
}

void ver(char *x, char *y){
  int p = 0;
  do{
    if(*x == *y){
      x++;
      p++; 
      printf("\nA letra está na %d° posição.\n", p); 
    }else{
      x++;
      p++;
    }
 }while(*x != '\0');
}