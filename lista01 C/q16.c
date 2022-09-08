#include <stdio.h>

int main (){

    float v, inss;
    int h;

    puts("Qual o valor da hora trabalhada? ");
    scanf("%f",&v);

    puts("Qual o valor do INSS (em decimal)? ");
    scanf("%f",&inss);

    puts("Quantas horas trabalhadas? ");
    scanf("%d",&h);

    printf("Salário Bruto: %.2f\nSalário Líquido: %.2f", h * v, (h * v) - inss*(h * v));
  
    return 0;
}