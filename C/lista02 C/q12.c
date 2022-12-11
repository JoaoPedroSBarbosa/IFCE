#include <stdio.h>

int main(){

  int x;

  puts("Digite a tabuada desejada: ");
  scanf("%d",&x);

  for(int i = 1 ; i <= 10; i++){
    printf("\n%d x %d = %d | %d + %d = %d | %d - %d = %d\n", x, i, x*i, x, i, x + i, x, i, x - i);
  }
  
  return 0;
}