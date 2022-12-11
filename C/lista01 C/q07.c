#include <stdio.h>

int main (){

    int h, m, s;

    puts("Quantas horas?");
    scanf("%d",&h);

    puts("Quantos minutos?");
    scanf("%d",&m);

    puts("Quantos segundos?");
    scanf("%d",&s);
  
    printf("O total de segundos é: %d",(h*3600) + (m*60) + s);
  
    return 0;
}