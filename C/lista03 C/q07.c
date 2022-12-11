#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define qtd 3

int main(){

  int x[qtd];
  float ma;
  double mg;
  
  srand(time(NULL));

  for(int i = 0; i < qtd; i++){
    x[i] = rand() % 19;
  }

  ma = ((float)x[0] + (float)x[1] + (float)x[2]) / 3.0;
  mg = sqrt((double)(x[0] * x[1] * x[2]));

  printf("O vetor:\n %d %d %d\n", x[0], x[1], x[2]);
  printf("A media aritmetica: %.2f\nA media geometrica: %.2f", ma, mg);

  return 0;
}