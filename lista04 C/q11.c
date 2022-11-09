#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define qtd 20

void gerarvetor(int *, int , int );
void imprimirvetor(int *, int );
void linha();
void ver(int **, int *, int *, int );
void imprimirmatriz(int **, int );

int main(){

  int *px = NULL, *py = NULL, **pz = NULL;
  int l;

  printf("Insira o tamanho do vetor: ");
  scanf("%d",&l);

  if(!(px = malloc((l * 2) * sizeof(int)))){
    printf("erro na alocação de memória.");
    exit(1);
  }

  if(!(py = malloc((l * 2) * sizeof(int)))){
    printf("erro na alocação de memória.");
    exit(2);
  }

  pz = (int **)calloc(l,sizeof(int *));
  for(int i = 0; i < l; i++){
    pz[i] = (int *)calloc(l,sizeof(int));
  }

  srand(time(NULL));

  linha();
  printf("X = ");
  gerarvetor(px, l*2, l);
  imprimirvetor(px, l*2);
  linha();
  printf("Y = ");
  gerarvetor(py, l*2, l);
  imprimirvetor(py, l*2);
  ver(pz, px, py, l*2);
  linha();
  imprimirmatriz(pz, l);
  linha();
  
  free(px);
  free(py);
  free(pz);
  
  return 0;
}

void imprimirvetor(int *p, int q){
  for(int k = 0; k < q; k++){
    printf("%d ", *(p + k));
  }
}

void gerarvetor(int *p, int q, int t){
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

void ver(int **m, int *px, int *py, int q1){
  int t = 0;
  for(int i = 0; i < q1; i++){
    for(int j = 0; i < q1; i++){
      int temp = *(px + t);
      int temp1 = *(py + t);
      m[temp1][temp] += 1;
      t++;
    }
  }
}

void imprimirmatriz(int **m, int q){
  for(int j = 0; j < q; j++){
    for(int k = 0; k < q; k++){
      printf("%2d ", m[j][k]);
    }
    printf("\n");
  }
}