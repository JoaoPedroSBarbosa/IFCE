#include <stdio.h>

void troca(int *, int *);

int main(){
  int a, b;
  int *x = &a, *y = &b;
  
  printf("Insira o valor de a: ");
  scanf("%d",x);

  printf("Insira o valor de b: ");
  scanf("%d",y);

  troca(x, y);

  return 0;
}

void troca(int *px, int *py){
  int temp = *py;
  *py = *px;
  *px = temp;

  printf("\n");
  printf("Os novos valores de a e b são:\n[%p] %d\n[%p] %d", px, *px, py, *py);
}