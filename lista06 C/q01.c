#include <stdio.h>
#include <stdlib.h>

struct aluno{
  float nota1;
  float nota2;
  float media;
};

int main (){
  struct aluno a1;

  printf("Qual a primeira nota do aluno: ");
  scanf("%f",&a1.nota1);

  printf("Qual a segunda nota do aluno: ");
  scanf("%f",&a1.nota2);
  
  a1.media = (a1.nota1 + a1.nota2)/2.0;

  printf("Nota 1: %.1f\nNota 2: %.1f\nMedia: %.1f",a1.nota1,a1.nota2,a1.media);
  
  return 0;
}