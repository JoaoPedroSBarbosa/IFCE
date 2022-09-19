#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  unsigned char armario = 0;
  int d;

  srand(time(NULL));
  
  for(int j = 0; ; j++){

    int a1 = 1, a2;
    
    puts("\nDigite o número correspondente a instrução:");
    printf("1. Ocupar armário.\n2. Desocupar armário.\n3. Sair.\n");
    scanf("%d",&d);

    if(d == 1){

      a2 = rand() % 7;
      
      if(a2 != 0){
        a1 = a1 << a2 - 1;
        armario = armario | a1;
      }else{
        a1 = a1 << a2;
        armario = armario | a1;
      } 
      
      for (unsigned i = 1 << 7; i > 0; i = i / 2)
        (armario & i) ? printf(" 1 ") : printf(" 0 ");
    }else if(d == 2){
      puts("Qual o numero do armario que deseja desocupar?");
      scanf("%d",&a2);

      if(a2 != 0){
        a1 = a1 << a2 - 1;
        a1 = ~a1;
        armario = armario & a1;
      }else{
        a1 = a1 << a2;
        a1 = ~a1;
        armario = armario & a1;
      }
      
      for (unsigned i = 1 << 7; i > 0; i = i / 2)
        (armario & i) ? printf(" 1 ") : printf(" 0 ");
      
    }else if(d == 3){
      break;
    }
  }
  
  return 0;
  
}