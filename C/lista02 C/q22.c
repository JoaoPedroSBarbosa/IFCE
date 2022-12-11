#include <stdio.h>

int main(){

  int a, b = 0, c;

  puts("Insira um número: ");
  scanf("%d",&a);

  do{
    if(a % 10 == 7){
      b++;
    }
    a /= 10;
    c++;
  }while(a != 0);

  printf("O seu número tem %d algarismos de valor 7.",b);
    
  return 0;
  
}