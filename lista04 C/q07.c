#include <stdio.h>
#include <stdlib.h>
#define qtd 10

void concatenar(char *, char *);
void tam(char *, int);

int main(){

  char x[qtd*2], y[qtd];
  char *px = x, *py = y;
  int l1, l2;

  printf("Insira a primeira palavra: ");
  fgets(x, 20, stdin);

  printf("Insira a segunda palavra: ");
  fgets(y, 10, stdin);

  tam(px, l1);
  tam(py, l2);

  concatenar(px, py);

  printf("string concatenada:\n%s", px);
  
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

  p -= 1;
}

void concatenar(char *x, char *y){
  while(*x){
        x++;    
    }while(*y){
      *x = *y;
      y++;
      x++;
    }*x = '\0';
}