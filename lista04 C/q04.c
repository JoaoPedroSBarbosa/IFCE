#include <stdio.h>
#define qtd 10

int main(){
  int x[qtd];
  int *p = x;
  
  for(int i = 0; i < qtd; i++){
    printf("Digite um valor: ");
    scanf("%d",(p + i));
  }

  for(int i = 0; i < qtd; i++){
    printf("\n[%p] %d\n", p, *(p + i));
  }
  
  return 0;
}