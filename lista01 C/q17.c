#include <stdio.h>
#include <math.h>

int main(){
  
  int a;
  int modulo;
  
  puts("Qual o valor de A?");
  scanf("%d",&a);

  modulo = fabs(a);
  
  printf("Seu valor absoluto: %d", modulo);
  
  return 0;
}