#include <stdio.h>

int main(){

  int a = 1, b = 0, c, t = 2;

  printf("%d ,",a);
  
  do{
    c = a + b;
    b = a;
    a = c;
    t++;
    printf(" %d ,",c);
  }while(t <= 20);
  
  return 0;
}