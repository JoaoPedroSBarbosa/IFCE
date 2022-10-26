#include <stdio.h>
#define qtd 3

int main(){

  int x[qtd][qtd];
  int i, c;

  for (int i = 0; i < qtd; i++) {
    for (int j = 0; j < qtd; j++) {
      printf("Digite o elemento da matriz[%d][%d]: ", i+1, j+1);
      scanf("%d",&x[i][j]);
    }
  }

  for (i=0; i<qtd; i++){
    for(c=0; c<qtd; c++){
      printf("%d ", x[i][c]);
    }
    printf("\n");
  }

  printf("Os elementos da diagonal principal sao:\n[1][1] = %d\n[2][2] = %d\n[3][3] = %d\n", x[0][0], x[1][1], x[2][2]);

  return 0;
}