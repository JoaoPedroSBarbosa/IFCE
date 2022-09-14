#include <stdio.h>

int main(){
  
  int p2, p3;
  float x, p1;

  puts("Qual o valor da mercadoria? ");
  scanf("%f",&x);

  p2 = x / 3;
  p3 = p2;
  p1 = x - (p2 + p3);
  

  printf("Entrada: %.2f\nPrimeira Parcela: %d.00\nSegunda Parcela: %d.00", p1, p2, p3);
  
  return 0;
}