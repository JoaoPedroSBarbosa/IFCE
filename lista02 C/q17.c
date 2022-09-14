#include <stdio.h>

int main(){

  for(int c = 10; c <= 100; c += 10){
    printf("\n%d graus celsius equivale a %.1f graus fahrenheit.\n", c, (1.8*c)+32);
  }

  return 0;
}