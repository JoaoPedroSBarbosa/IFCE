#include <stdio.h>
#include <stdlib.h>

struct vector{
  int n;
  float media;
};

void gerarvetor(int *, int );
void media(struct vector *,int *, int );
void imprimirvetor(int *, int );

int main (){
  struct vector v1, *v = &v1;
  int q = v->n, *vt;

  puts("Quantos elementos no vetor?");
  scanf("%d",&v->n);

  if(!(vt = (int *)malloc(q * sizeof(int)))){
    printf("erro!");
    exit(1);
  }
  
  gerarvetor(vt, q);
  imprimirvetor(vt, q);
  media(v,vt,q);
  printf("Media: %.2f", v->media);
  
  return 0;
}

void gerarvetor(int *v, int q){
  for(int i = 0; i < q;i++){
    *(v + i) = 0 + rand() % 10;
  }
}

void media(struct vector *p,int *q, int n){
  int temp = 0;
  for(int i = 0; i < n; i++){
    temp += *(q + i);
  }
  temp = (float)temp/(float)n;
  p->media = temp;  
}

void imprimirvetor(int *v, int q){
  for(int i = 0; i < q;i++){
    printf("%d ",*(v+i));
  }
}