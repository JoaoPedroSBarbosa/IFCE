#include <stdio.h>

int main(){
  int x, y = x;
  int *p = &x, *me = &y;

  puts("Para encerrar o programa digite um numero negativo.");
  
  for(int i = 0; ; i++){

    printf("digite um numero: ");
    scanf("%d",p);
    
    if(*p < 0){
      break;
    }else{
      if(*p < *me){
        *me = *p;
      }
    }
  }

  printf("O menor numero digitado foi [%p] %d", me, *me);
  
  return 0;
}