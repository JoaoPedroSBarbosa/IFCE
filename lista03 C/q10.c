#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define qtd 3

int main(){

  int x[qtd][qtd];
  int y, h = 0;

  srand(time(NULL));

  for (int i = 0; i < qtd; i++) {
    for (int j = 0; j < qtd; j++) {
      x[i][j] = rand() % 50;
    }
  }
  
  for (int i=0; i < qtd; i++){
    for(int c=0; c < qtd; c++){
      printf("%d ", x[i][c]);
    }
    printf("\n");
  }
  
  puts("Insira um número para verificação: ");
  scanf("%d",&y);

  for (int i = 0; i < qtd; i++){
    for(int c = 0; c < qtd; c++){
      if(x[i][c] == y){
        h += 1;
      }
    }
  }
  
  printf("O numero %d aparece %d vezes.", y, h);
  
  return 0;
}