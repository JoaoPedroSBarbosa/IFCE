#include <stdio.h>

int main(){

  for(int i = 1; i <= 256; i++){
    printf("\nNúmero: %d, Octal: %o, Hexadecimal: %x\n", i, i, i);
  }
  return 0;
}