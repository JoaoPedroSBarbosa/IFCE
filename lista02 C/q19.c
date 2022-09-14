#include <stdio.h>

int main(){
  int a, b, x = 0, d;
  
  puts("Forneça o mínimo da Faixa: ");
  scanf("%d",&a);

  puts("Forneça o máximo da Faixa: ");
  scanf("%d",&b);

  for(int i = a; i <= b; i++){
    x += i;
  }

  d = (b - a) + 1;
  
  printf("A média da faixa fornecida é: %.2f", (float)x/(float)d);
  
  return 0;
}