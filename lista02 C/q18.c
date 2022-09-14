#include <stdio.h>

int main(){ 
  
  float n = 0;
  int q = 0;
      
  for(n=1;n>=0 && q!=64;n=n+n){
   q++;
    printf("%d° quadrado tem %.0f grãos\n", q, n);
  }
  return 0;
}