#include <stdio.h>

int main(){
  
  int i = 1, f1 = 1, f;

  puts("Insira o número do fatorial desejado: ");
  scanf("%d",&f);

  while(i <= f){
    f1 = f1*i;
    i++;  
  }
  
  printf("O valor do fatorial é: %d", f1);
  
  return 0;
}