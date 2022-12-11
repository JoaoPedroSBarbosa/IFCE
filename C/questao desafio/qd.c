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
      int g = 1, ver;
      
      if(armario == 255){
        puts("");
        printf("O armário está lotado!");
        puts("");
        continue;
      }else{
        do{
          a1 = 1;
          ver = armario;
          a2 = rand() % 8;
          a1 = a1 << a2;
          armario = armario | a1;
        }while(ver == armario);
      
        armario = armario | a1;
      
      for (unsigned i = 1; i <= 128; i = i * 2){
        if (armario & i){
          printf("\n%d armario : ocupado\n", g);
        }else{
          printf("\n%d armario : desocupado\n", g);
        }
        g+=1;
        }
      }
    }else if(d == 2){
      puts("");
      puts("Qual o numero do armario que deseja desocupar?");
      scanf("%d",&a2);
      
      int g = 1;

      a1 = a1 << (a2 - 1);
      a1 = ~a1;
      armario = armario & a1;
      
      for (unsigned i = 1; i <= 128; i = i * 2){
        if (armario & i){
          printf("\n%d armario : ocupado\n", g);
        }else{
          printf("\n%d armario : desocupado\n", g);
        }
        g+=1;
      }
    }else if(d == 3){
      break;
    }
  }
  
  return 0;
  
}