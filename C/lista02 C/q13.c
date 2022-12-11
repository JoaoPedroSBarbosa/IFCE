#include <stdio.h>

int main(){
  int a, b, x = 0;
  
  puts("Forneça a Faixa: ");
  scanf("%d",&a);

  puts("Forneça a Faixa: ");
  scanf("%d",&b);

  if(a < b){
    for(int i = a; i <= b; i++){
    x += i;
  }
  }else{
    for(int i = b; i <= a; i++){
    x += i;
  }
  }

  printf("O somatório de todos os pares da faixa é: %d",x);
  
  return 0;
}