#include <stdio.h>
#include <stdlib.h>
#define TAM 3

struct aluno{
  float nota1;
  float nota2;
  float media;
  char prof[50];
};

void nota(struct aluno *, int );
void media(struct aluno *, int );

int main (){
  struct aluno a1[TAM], *a = a1;

  for(int i = 0; i < TAM; i++){
    printf("Qual a primeira nota do aluno %d: ",i+1);
    scanf("%f",&(a +i)->nota1);
  }

  for(int i = 0; i < TAM; i++){
    printf("Qual a segunda nota do aluno %d: ",i+1);
    scanf("%f",&(a + i)->nota2);
  }

  for(int i = 0; i < TAM; i++){
    printf("Qual o professor do aluno %d: \n",i+1);
    fgets((a + 1)->prof,50,stdin);
  }

  media(a, TAM);
  nota(a, TAM);
  
  return 0;
}

void media(struct aluno *a, int q){
  for(int i = 0; i < q; i++){
    (a+i)->media = ((a+i)->nota1 + (a+i)->nota2)/2.0;
  } 
}

void nota(struct aluno *a, int q){
  for(int i = 0; i < q; i++){
    printf("\nAluno %d | Professor %s\nNota 1: %.1f | Nota 2: %.1f | Media: %.1f\n", i+1,(a + i)->prof, (a+i)->nota1, (a+i)->nota2, (a+i)->media);
    
  }
}