#include <stdio.h>

int main(){
  
  int p = 110, j = 150, i = 0;

  do{
    p += 3;
    j += 2;
    i += 1;
  }while(j > p);

  printf("Após %d anos o Pedro ficará maior que José",i);
 
  return 0;
}