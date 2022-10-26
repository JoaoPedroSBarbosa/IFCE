#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define qtd 100

int main(){

  int x[qtd];

  for(int i = 0; i < qtd; i++){
    x[i] = rand() % 100;
  }
  printf("O vetor:\n");

  for(int i = 0; i < qtd; i++){
    printf("%d ", x[i]);
  }

  for(int i = 0; i < qtd - 1; i++){
    for(int k = 0; k < qtd - i - 1; k++){
      if(x[k] > x[k + 1]){
        int z = x[k];
        x[k] = x[k + 1];
        x[k + 1] = z;
      }
    }
  }

  printf("\nO novo vetor:\n");
  
  for(int i = 0; i < qtd; i++){
    printf("%d ", x[i]);
  }
  
  return 0;
}