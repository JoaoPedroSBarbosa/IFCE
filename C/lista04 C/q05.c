#include <stdio.h>

void tam(char *, int);

int main(){
  char x[100];
  char *p = x;
  int l;

  printf("Insira uma palavra: ");
  fgets(x, 100, stdin);

  tam(p, l);
  
  return 0;
}

void tam(char *x, int p){
  p = 0;
  
  do{
    if(*x == ' '){
      x++;
    }else{
      p++;
      x++;
    }
  }while(*x != '\0');

  printf("O tamanho da sua palavra é %d letras", p - 1);
}