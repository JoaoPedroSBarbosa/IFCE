#include <stdio.h>

int main(){
  int a, b;

  puts("Digite um valor inteiro para A: ");
  scanf("%d",&a);

  do{
    puts("Digite um valor inteiro para B: ");
    scanf("%d",&b);
  }while(b == 0);

  printf("A divisão dos dois números resultará em %.2f.", (float)a/(float)b);
  
  return 0;
}