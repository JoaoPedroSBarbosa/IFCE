#include <stdio.h>

int main(){
  
  int a, b = 0, c, d;

  puts("Digite um valor de 5 dígitos:");
  scanf("%d",&a);

  d = a;

  while(a != 0){
    c = a % 10;
    b = b*10 + c;
    a /= 10;
  } 

  if(d == b){
    printf("O número é um palíndromo");
  }else{
    printf("O número não é um palíndromo");
  }
 
  
  return 0;
  
}