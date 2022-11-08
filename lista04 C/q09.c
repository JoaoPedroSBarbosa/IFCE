#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define qtd 10

void gerarvetor(int *, int);
void imprimirvetor(int *, int );
void ordenarvetor(int *, int );
void linha();

int main(){

  int x[qtd];
  int *p = x;

  srand(time(NULL));

  gerarvetor(p, qtd);
  imprimirvetor(p, qtd);
  linha();
  ordenarvetor(p, qtd);
  imprimirvetor(p, qtd);
  linha();
  
  return 0;
}

void gerarvetor(int *p, int q){
  for(int k = 0; k < q; k++){
    *(p + k) = rand() % 100;
  }
}

void imprimirvetor(int *p, int q){
  for(int k = 0; k < q; k++){
    printf("%d ", *(p + k));
  }
}

void ordenarvetor(int *p, int q){
  int pos, menor;
  
  for(int c = 0; c < q; c++){
    menor = *(p + c);
    pos = c;
    for(int d = c + 1; d < q; d++){
      if(*(p + d) < menor){
        menor = *(p + d);
        pos = d;
      }
    }
    if(pos != c){
       int aux = *(p + c);
       *(p + c) = *(p + pos);
       *(p + pos) = aux;
    }
  }
}

void linha(){
  printf("\n");
  for(int k = 0; k < 35; k++){
    printf("-");
  }
  printf("\n");
}