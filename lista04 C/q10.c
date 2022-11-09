#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define qtd 20

void gerarvetor(int *, int , int );
void imprimirvetor(int *, int );
void linha();
void ver(int *, int , int *);

int main(){

  int *px = NULL, *py = NULL;
  int l;

  printf("Insira o tamanho do vetor: ");
  scanf("%d",&l);

  if(!(px = malloc((l * 2) * sizeof(int)))){
    printf("erro na alocação de memória.");
    exit(1);
  }

  if(!(py = malloc(l * sizeof(int)))){
    printf("erro na alocação de memória.");
    exit(2);
  }

  linha();
  printf("X = ");
  gerarvetor(px, l*2, l);
  imprimirvetor(px, l*2);
  linha();
  printf("Y = ");
  ver(px, l*2, py);
  imprimirvetor(py, l);
  linha();
  
  free(px);
  free(py);
  
  return 0;
}

void imprimirvetor(int *p, int q){
  for(int k = 0; k < q; k++){
    printf("%d ", *(p + k));
  }
}

void gerarvetor(int *p, int q, int t){
  srand(time(NULL));
  for(int k = 0; k < q; k++){
    *(p + k) = 0 + rand() % t;
  }
}

void linha(){
  printf("\n");
  for(int k = 0; k < 35; k++){
    printf("-");
  }
  printf("\n");
}

void ver(int *px, int q1, int *py){
  for(int i = 0; i < q1; i++){
    int temp = *(px + i);
    *(py + temp) += 1;
  }
}