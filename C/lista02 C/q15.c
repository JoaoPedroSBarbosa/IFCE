#include <stdio.h>

int main(){
  int x, t = 0, p = 1;

  puts("Digite o expoente entre 0 e 7 de base 3: ");
  scanf("%d",&x);

  while(t != x){
    p = p * 3;
    t++;
  }

  printf("O valor da potência é: %d", p);
  
  return 0;
}