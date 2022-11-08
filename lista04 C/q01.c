#include <stdio.h>

void soma(int *, int *, int *);

int main(){
  int a, b, c;
  int *s = &c, *x = &a, *y = &b;
  
  printf("Insira o valor de a: ");
  scanf("%d",x);

  printf("Insira o valor de b: ");
  scanf("%d",y);

  soma(x, y, s);

  return 0;
}

void soma(int *x, int *y, int *p){
  *p = *x + *y;

  printf("A soma resultou em: [%p] %d", p, *p);
}