#include <stdio.h>

int main(){

  int teste = 1;
  int day;

  do{
    puts("Insira o dia da semana: ");
    scanf("%d",&day);

    if(day == 1 )
      printf("Domingo\n");
    else if (day == 2 )
      printf("Segunda\n");
    else if (day == 3 )
      printf("Terça\n");
    else if (day == 4 )
      printf("Quarta\n");
    else if (day == 5 )
      printf("Quinta\n");
    else if (day == 6 )
      printf("Sexta\n");
    else if (day == 7 )
      printf("Sábado\n");
    else if(day == 0)
      break;
    else
      printf("Insira um dia válido!\n");
  }while (teste != 0);
  
  return 0;
}